#include "tabelas.h"
#include <fstream>
#include <iostream>

///Funções do CLIENTE
Cliente::Cliente(string nome, string tipo, unsigned int codigo){
    this->nome = nome;
    this->tipo = tipo;
    this->codigo = codigo;
}

void Cliente::salvar_no_arquivo(){
    ofstream arquivo;
    arquivo.open("Arquivos/cliente.txt", ios::app);

    arquivo << this->nome << "\n" << this->tipo << "\n" << this->codigo << endl;
    arquivo.close();
}


///Funções do PRODUTO
Produto::Produto(string nome, double valor, unsigned int codigo){
    this->nome = nome;
    this->valor = valor;
    this->codigo = codigo;
}

void Produto::salvar_no_arquivo(){
    ofstream arquivo;
    arquivo.open("Arquivos/produto.txt", ios::app);

    arquivo << this->nome << "\n" << this->valor << "\n" << this->codigo << endl;
    arquivo.close();
}


Fornecimento::Fornecimento( unsigned int cod_venda, string data_fornecimento,
                            unsigned int qtd_produto, bool pago, string nome_cliente,
                            string nome_produto){

    this->cod_venda = cod_venda;
    this->data_do_fornecimeno = data_fornecimento;
    this->qtd_produto = qtd_produto;
    this->pago = pago;
    this->nome_cliente = nome_cliente;
    this->nome_produto = nome_produto;
}

void Fornecimento::salvar_no_arquivo(){
    ofstream arquivo;
    arquivo.open("Arquivos/fornecimento.txt", ios::app);
}
