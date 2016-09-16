#ifndef TABELAS_H
#define TABELAS_H

#include <string>
using namespace std;

class Cliente{
private:
    unsigned int codigo;
    string nome;
    string tipo;
public:
    Cliente(string, string, unsigned int);
    void salvar_no_arquivo();
};

class Produto{
private:
    unsigned int codigo;
    string nome;
    double valor;
public:
    Produto(string, double, unsigned int);
    void salvar_no_arquivo();
};

class Fornecimento{
private:
    unsigned int cod_venda;
    string data_do_fornecimeno;
    unsigned int qtd_produto;
    bool pago;
    string nome_cliente;
    string nome_produto;
public:
    Fornecimento(unsigned int,string, unsigned int, bool, string, string);
    void salvar_no_arquivo();
};

#endif // TABELAS_H
