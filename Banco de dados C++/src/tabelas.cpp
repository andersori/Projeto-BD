#include "tabelas.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>

///Funções do CLIENTE
Cliente::Cliente(){

}
Cliente::Cliente(string nome, string tipo, unsigned int codigo){
    this->nome = nome;
    this->tipo = tipo;
    this->codigo = codigo;
}

string Cliente::get_nome(){
    return this->nome;
}
string Cliente::get_tipo(){
    return this->tipo;
}
unsigned int Cliente::get_codigo(){
    return this->codigo;
}

void Cliente::set_codigo(unsigned int codigo){
    this->codigo = codigo;
}
void Cliente::set_nome(string nome){
    this->nome = nome;
}
void Cliente::set_tipo(string tipo){
    this->tipo = tipo;
}

void Cliente::salvar_no_arquivo(Inf_arquivos* informacoes){
    ofstream arquivo;
    arquivo.open("Arquivos/cliente.txt", ios::app);

    arquivo << this->nome << "\n" << this->tipo << "\n" << this->codigo << endl;
    Cliente cliente(this->nome,this->tipo,this->codigo);

    informacoes->clientes.push_back(cliente);
    arquivo.close();
}
//-------------------------------------------------------------------------------------







///Funções do PRODUTO
Produto::Produto(){

}
Produto::Produto(string nome, double valor, unsigned int codigo){
    this->nome = nome;
    this->valor = valor;
    this->codigo = codigo;
}
bool Produto::operator==(const Produto& p) const{
    if(this->codigo == p.codigo){
        return true;
    }
    return false;
}

string Produto::get_nome(){
    return this->nome;
}
double Produto::get_valor(){
    return this->valor;
}
unsigned int Produto::get_codigo(){
    return this->codigo;
}

void Produto::set_codigo(unsigned int cod){
    this->codigo = cod;
}
void Produto::set_nome(string nome){
    this->nome = nome;
}
void Produto::set_valor(double valor){
    this->valor = valor;
}

void Produto::salvar_no_arquivo(Inf_arquivos* informacoes){
    ofstream arquivo;
    arquivo.open("Arquivos/produto.txt", ios::app);

    arquivo << this->nome << "\n" << this->valor << "\n" << this->codigo << endl;
    Produto produto(this->nome, this->valor, this->codigo);

    informacoes->produtos.push_back(produto);
    arquivo.close();
}
//---------------------------------------------------------------------------------------








///Informações sobre fornecimento
Fornecimento::Fornecimento(){

}

void Fornecimento::salvar_no_arquivo(Inf_arquivos* informacoes){
    ofstream arquivo;
    arquivo.open("Arquivos/fornecimento.txt", ios::app);

    arquivo << this->cod_venda << endl;
    arquivo << this->data_do_fornecimeno << endl;
    arquivo << this->pago << endl;
    arquivo << this->cliente.get_codigo() << endl;

    vector<inf_produtos>::iterator it;
    for(it = this->produtos.begin(); it != this->produtos.end();it++){
        arquivo << (*it).produto.get_codigo() << " " << (*it).qtd << " " << (*it).valor << endl;
    }
    arquivo << "#\n";
    arquivo.close();
}
//----------------------------------------------------------------------------------------







///Informações sobre os arquivos
Inf_arquivos::Inf_arquivos(){
    ifstream arq_clientes;  //Variaveis de manipulação de arquivos
    ifstream arq_produtos;  // --       --    --       --    --

    arq_clientes.open("Arquivos/cliente.txt", ios::in); //Abrindo os arquivos no caminhos especificado entre aspas
    arq_produtos.open("Arquivos/produto.txt", ios::in); //e abrindo o arquvos no modo "ios::in" que é somente para leitura.

    if(arq_clientes.is_open()){ //se coceguio abrir
        while(!arq_clientes.eof()){ //Enquanto não for o final do arquivo fique lendo seus dados
            string nome;        //Variaveis temporarias para armazenar as informações de um registro no arquivo.
            string tipo;        //A cada 3 linhas no arquivo um novo registro é lido.
            string cod_sting;   //

            getline(arq_clientes, nome);        //pego a primeira linha de um registro, que corresponde ao nome do cliente

            if(nome[0] == '\0'){                //se o '\0' for encontrado então chegou no fim do arquivo
                break;                          //não tente armazenar nada nas proximas variaveis
            }

            getline(arq_clientes, tipo);        //a linha depois do nome corresponde ao tipo do cliente
            getline(arq_clientes, cod_sting);   //a proxima linha é o codigo do cliente, para não bugar a leitura do arquivo estou
                                                //usando a função getline, ele so armazena em variaveis do tipo string, por isso eu armazeno
                                                //na variavel "cod_string" e depois faço a converção dessa variavel para inteiro, na função abaixo

            unsigned int cod_int = atoi(cod_sting.c_str()); //convertendo o valor da string para int

            Cliente clien(nome,tipo,cod_int);   //gerando um objeto "Cliente"

            this->clientes.push_back(clien); //colocando numa lisata de clientes cadastrados
        }

        cout<<"------------------Arquivo cliente.txt------------------"<<endl;
        vector<Cliente>::iterator it;
        for(it = this->clientes.begin(); it != this->clientes.end(); it++){
            cout<<(*it).get_nome() <<", "<<(*it).get_tipo() << ", "<<(*it).get_codigo()<<endl;
        }
        cout<<endl<<endl;

        arq_clientes.close();   //Fechando o arquivo
    }
    else{
        cout<<"Não foi possivel abrir o aquivo!"<<endl;
    }

    /*Tentando ler os produtos cadastrados*/
    if(arq_produtos.is_open()){

        while(!arq_produtos.eof()){
            string nome;
            string valor_string;
            string cod_string;

            getline(arq_produtos, nome);

            if(nome[0] == '\0'){
                break;
            }

            getline(arq_produtos, valor_string);
            getline(arq_produtos, cod_string);

            unsigned int cod_int = atoi(cod_string.c_str());    //Converte para inteiro
            double valor_doble = atof(valor_string.c_str());    //Converte para double

            Produto produto(nome, valor_doble, cod_int);
            this->produtos.push_back(produto);

        }

        cout<<"------------------Arquivo produto.txt------------------"<<endl<<endl;
        vector<Produto>::iterator it;
        for(it = this->produtos.begin(); it != this->produtos.end(); it++){
            cout<<(*it).get_nome() <<", "<<(*it).get_valor() << ", "<<(*it).get_codigo()<<endl;
        }
        cout<<endl<<endl;

        arq_produtos.close();
    }
    else{
        cout<<"Não foi possivel abrir o arquivo!"<<endl;
    }
}





