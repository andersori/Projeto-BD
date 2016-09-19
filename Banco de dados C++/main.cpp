#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <algorithm>
#include "tabelas.h"
using namespace std;



int main()
{
    int opcao;
    Inf_arquivos informacoes;   //quando esse objeto é instanciado ele ler todos os arquivos
                                //deixando tudo em memoria, assim não precisa ficar lendo e escrevendo direto nos arquivos

    system("pause");    //espera o usuário digitar alguma coisa(no windows)
    system("cls");      //limpa a tela(no windows)

    do{
        cout<<"1 - Cadastrar cliente "<<endl;
        cout<<"2 - Cadastrar produto "<<endl;
        cout<<"3 - Cadastrar fornecimento "<<endl;
        cout<<"4 - Relatorio de um fornecimento "<<endl;
        cout<<"5 - Valor total do fornecimento "<<endl;
        cout<<"6 - Quais produtos foram entregues num determinado fornecimento "<<endl;
        cout<<"7 - Quais clientes estão devendo "<<endl;
        cout<<"8 - Listar produtos "<<endl;
        cout<<"9 - Listar clientes "<<endl;
        cout<<"10 - Sair"<<endl;
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
                fflush(stdin);      //limpando o buffer pois se tiver algo la ele nao ira pegar o nome que o usuário digitou
                getline(cin, nome); //pegando uma linha inteira que o usuário digitar, incluindo os espaços em brancos

                cout<<"Tipo: ";
                fflush(stdin);
                getline(cin, tipo);

                cout<<"Codigo: ";
                fflush(stdin);
                cin >> cod;

                Cliente cli(nome, tipo, cod);   //criando um objeto cliente com as informações digitadas acima
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

                system("cls");  //limpando a tela(so no windows)
                cout<<"--CADASTRAR FORNECIMENTO--"<<endl<<endl;

                cout<<"Codigo da venda: ";
                cin>>fornecimento.cod_venda;    //requisitando o codigo da venda

                bool conti;
                while(true){
                    unsigned int cod_cliente;

                    cout<<"Codigo do cliente: ";
                    cin>>cod_cliente;
                    //cin>>fornecimento.cod_cliente;

                    Cliente cli;
                    cli.set_codigo(cod_cliente);

                    vector<Cliente>::iterator it_cli;
                    it_cli = find(informacoes.clientes.begin(), informacoes.clientes.end(), cli);

                    if(it_cli != informacoes.clientes.end()){
                        fornecimento.cod_cliente = cod_cliente;
                        break;
                    }
                    else{

                        cout<<"Codigo invalido!!!"<<endl<<"'1' para digitar outro codigo"<<endl<<"'0' para cancelar o cadastrar o fornecimento: "<<endl;
                        cin>>conti;

                        if(!conti){
                            break;
                        }
                    }

                }

                if(!conti){
                    break;
                }

                cout<<"Data do fornceminto: ";
                cin>>fornecimento.data_do_fornecimeno;  //esperando a data do fornecimento

                cout<<"Data da entrega: ";
                cin>>fornecimento.data_da_entrega;

                cout<<"Digite '1' se ja foi pago ou '0' se ainda vai ser pago: ";
                cin>>fornecimento.pago;

                cout<<endl<<endl<<"--Produtos do fornecimento--"<<endl;

                bool continuar = true;  //variavel que ficará responsavel pela parada do loop abaixo
                while(continuar){
                    Fornecimento::inf_produtos pro; //criando uma estrutura que terá as seguintes informações
                                                    //PRODUTO, QUANTIDADE, PRECO.

                    unsigned int cod_produto;

                    cout<<"Codigo do produto: ";
                    cin>>cod_produto;   //esperando o codigo

                    Produto temp;       //criando uma produto temporario
                    temp.set_codigo(cod_produto);   //setando o codigo dele de acordo com o codigo informado pelo usuario acima

                    //verificando se esse produto esta cadastrado no sistema
                    vector<Produto>::iterator it = find(informacoes.produtos.begin(),informacoes.produtos.end(), temp);

                    //se o produto informado acima estiver cadastrado
                    //requisite as proximas informações
                    if(it != informacoes.produtos.end()){

                        cout<<"Quantidade de caixar enviadas: ";
                        cin>>pro.qtd;

                        cout<<"Valor unitario das caixa: ";
                        cin>>pro.valor;

                        pro.cod_produto = cod_produto;

                        fornecimento.produtos.push_back(pro);   //adicionando esse produto com suas informações na lista de produtos
                                                                //desse fornecimento.
                    }
                    else{
                        cout<<endl<<"PRODUTO INVALIDO!!!"<<endl;    //se o codigo do produto informado acima não estiver relacionado com nenhum
                                                                    //produto cadastrado no sistema, então nao precisa perguntar qual o preço por caixa
                                                                    //e muito menos a quantidade de caixas, só mostre essa menssagem de produto invalido.
                    }


                    cout<<endl<<"'1' para adicionar produto ao fornecimento\n'0' finalizar os dados do fornecimento\n->";   //pergundando se ainda tem produtos nesse fornecimento
                    cin>>continuar;     //se sim, pergunte qual o novo produto, e repita os passo acima
                    cout<<endl<<endl;
                }

                //se nao foi adicionado nenhum produto a este fornecimento então o fornecimento não pode ser salvo, pois não
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
            case 4:{
                unsigned int cod_venda;
                cout<<"Digite o codigo da venda: "<<endl;
                cin>>cod_venda;

                informacoes.relatorio_de_venda(cod_venda);

                break;
            }
            case 5:{
                unsigned int cod_venda;

                system("cls");  //limpando a tela(so no windows)
                cout<<"--VALOR DE UM FORNECIMENTO--"<<endl<<endl;

                cout<<"Digite o codigo da venda: ";
                cin>>cod_venda;

                informacoes.valor_total_fornecimento(cod_venda);
                break;
            }
            case 6:{
                system("cls");  //limpando a tela(so no windows)
                cout<<"--LISTA DE PRODUTOS DE UM FORNECIMENTO--"<<endl<<endl;

                unsigned int cod_venda;
                cout<<"Codigo da venda: ";
                cin>>cod_venda;

                informacoes.listar_prod_venda(cod_venda);

                break;
            }
            case 7:{
                system("cls");  //limpando a tela(so no windows)
                cout<<"--LISTA CLIENTES DEVEDORES--"<<endl<<endl;

                informacoes.listar_devedores();

                break;
            }
            case 8:{
                system("cls");  //limpando a tela(so no windows)
                cout<<"--LISTA DE PRODUTOS--"<<endl<<endl;

                informacoes.listar_produtos();

                break;
            }
            case 9:{
                system("cls");  //limpando a tela(so no windows)
                cout<<"--LISTA DE CLIENTES--"<<endl<<endl;
                informacoes.listar_clientes();

                break;
            }
            case 10:{
                break;
            }
            default:{
                cout<<"Operacao invalida!!!"<<endl;
                system("pause");
                break;
            }
        }

        system("cls");
    }while(opcao != 10);

    cout << "Bye world!" << endl;
    return 0;
}
