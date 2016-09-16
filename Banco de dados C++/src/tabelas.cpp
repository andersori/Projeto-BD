#include "tabelas.h"
#include <fstream>
#include <iostream>

///Funções do CLIENTE
void Cliente::set_nome(string nome){
    this->nome = nome;
}
void Cliente::set_tipo(string tipo){
    this->tipo = tipo;
}
void Cliente::set_codigo(unsigned int){
    this->tipo = tipo;
}
void Cliente::salvar_no_arquivo(string nome, string tipo, unsigned int codigo){
    ofstream arquivo;
    arquivo.open("Arquivos/cliente.txt", ios::app);

    arquivo << nome << "\n" << tipo << "\n" << codigo << endl;
    arquivo.close();
}


void Produto::salvar_no_arquivo(string nome, unsigned int codigo, double valor){

}


void Fornecimento::salvar_no_arquivo(unsigned int cod_venda, string data_fornecimento,
                                     unsigned int qtd_produto, bool pago, string nome_cliente,
                                     string nome_produto){



}
