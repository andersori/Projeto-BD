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
    void set_nome(string);
    void set_tipo(string);
    void set_codigo(unsigned int);
    void salvar_no_arquivo(string, string, unsigned int);
};

class Produto{
private:
    unsigned int codigo;
    string nome;
    double valor;
public:
    void salvar_no_arquivo(string, unsigned int, double);
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
    void salvar_no_arquivo(unsigned int,string, unsigned int, bool, string, string);
};

#endif // TABELAS_H
