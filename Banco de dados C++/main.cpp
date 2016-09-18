#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <algorithm>
#include "tabelas.h"
using namespace std;



int main()
{
    int opcao;
    Inf_arquivos informacoes;   //quando esse objeto � instanciado ele ler todos os arquivos
                                //deixando tudo em memoria, assim n�o precisa ficar lendo e escrevendo direto nos arquivos

    system("pause");    //espera o usu�rio digitar alguma coisa(no windows)
    system("cls");      //limpa a tela(no windows)

    do{
        cout<<"1 - Cadastrar cliente "<<endl;
        cout<<"2 - Cadastrar produto "<<endl;
        cout<<"3 - Cadastrar fornecimento "<<endl;
        cout<<"8 - Sair"<<endl;
        cout<<"->";
        cin>>opcao;

        switch(opcao){
            case 1:{
                string nome;
                string tipo;
                unsigned int cod;

                system("cls");  //limpando a tela(so no windows)
                cout<<"--CADASTRAR CLIENTE--"<<endl<<endl;

                cout<<"Nome: ";
                fflush(stdin);      //limpando o buffer pois se tiver algo la ele nao ira pegar o nome que o usu�rio digitou
                getline(cin, nome); //pegando uma linha inteira que o usu�rio digitar, incluindo os espa�os em brancos

                cout<<"Tipo: ";
                fflush(stdin);
                getline(cin, tipo);

                cout<<"Codigo: ";
                fflush(stdin);
                cin >> cod;

                Cliente cli(nome, tipo, cod);   //criando um objeto cliente com as informa��es digitadas acima
                cli.salvar_no_arquivo(&informacoes);    //salvando no arquivo de cliente
                break;

            }
            case 2:{
                string nome;
                double valor;
                unsigned int cod;

                system("cls");  //limpando a tela
                cout<<"--CADASTRAR PRODUTO--"<<endl<<endl;

                cout<<"Nome: ";
                fflush(stdin);  //limpando o buffer
                getline(cin, nome); //lendo uma linha inteira no prompt

                cout<<"Valor: ";
                fflush(stdin);
                cin >> valor;

                cout<<"Codigo: ";
                cin >> cod;

                Produto pro(nome, valor, cod);  //criando um objeto produto
                pro.salvar_no_arquivo(&informacoes);    //armazenando no arquivo de produtos

                break;
            }
            case 3:{
                Fornecimento fornecimento;  //criando um objeto fornecimento
                unsigned int cod_cliente;

                cout<<"Codigo da venda: ";
                cin>>fornecimento.cod_venda;    //requisitando o codigo da venda

                cout<<"Data do fornceminto: ";
                cin>>fornecimento.data_do_fornecimeno;  //esperando a data do fornecimento

                cout<<"Digite '1' se ja foi pago ou '0' se ainda vai ser pago: ";
                cin>>fornecimento.pago;

                cout<<"Codigo do cliente: ";
                cin>>cod_cliente;

                cout<<endl<<endl<<"--Produtos do fornecimento--"<<endl;

                bool continuar = true;  //variavel que ficar� responsavel pela parada do loop abaixo
                while(continuar){
                    Fornecimento::inf_produtos pro; //criando uma estrutura que ter� as seguintes informa��es
                                                    //PRODUTO, QUANTIDADE, PRECO.

                    unsigned int cod_produto;

                    cout<<"Codigo do produto: ";
                    cin>>cod_produto;   //esperando o codigo

                    Produto temp;       //criando uma produto temporario
                    temp.set_codigo(cod_produto);   //setando o codigo dele de acordo com o codigo informado pelo usuario acima

                    //verificando se esse produto esta cadastrado no sistema
                    vector<Produto>::iterator it = find(informacoes.produtos.begin(),informacoes.produtos.end(), temp);

                    //se o produto informado acima estiver cadastrado
                    //requisite as proximas informa��es
                    if(it != informacoes.produtos.end()){

                        cout<<"Quantidade de caixar enviadas: ";
                        cin>>pro.qtd;

                        cout<<"Valor unitario das caixa: ";
                        cin>>pro.valor;

                        pro.cod_produto = cod_produto;

                        fornecimento.produtos.push_back(pro);   //adicionando esse produto com suas informa��es na lista de produtos
                                                                //desse fornecimento.
                    }
                    else{
                        cout<<endl<<"PRODUTO INVALIDO!!!"<<endl;    //se o codigo do produto informado acima n�o estiver relacionado com nenhum
                                                                    //produto cadastrado no sistema, ent�o nao precisa perguntar qual o pre�o por caixa
                                                                    //e muito menos a quantidade de caixas, s� mostre essa menssagem de produto invalido.
                    }


                    cout<<endl<<"'1' para adicionar produto ao fornecimento\n'0' finalizar os dados do fornecimento\n->";   //pergundando se ainda tem produtos nesse fornecimento
                    cin>>continuar;     //se sim, pergunte qual o novo produto, e repita os passo acima
                    cout<<endl<<endl;
                }

                //se nao foi adicionado nenhum produto a este fornecimento ent�o o fornecimento n�o pode ser salvo, pois n�o
                //ha sentido num fornecimento sem produtos
                if(fornecimento.produtos.size() == 0){
                    cout<<"Operacao de fornecimento nao concluida,(alguns dados podem estar faltando)!!"<<endl;
                    system("pause");
                }
                else{
                    fornecimento.salvar_no_arquivo(&informacoes); //salvando esse fornecimento no arquivo
                }


                break;
            }
            default:{
                break;
            }
        }

        system("cls");
    }while(opcao != 8);

    cout << "Bye world!" << endl;
    return 0;
}
