#ifndef TABELAS_H
#define TABELAS_H

#include <string>
#include <vector>
using namespace std;
class Inf_arquivos;

class Cliente{
private:
    unsigned int codigo;
    string nome;
    string tipo;
public:
    Cliente();
    Cliente(string, string, unsigned int);

    //GETS
    string get_nome();
    string get_tipo();
    unsigned int get_codigo();

    //SETS
    void set_nome(string);
    void set_tipo(string);
    void set_codigo(unsigned int);

    //OPERACOES
    void salvar_no_arquivo(Inf_arquivos*);
};

class Produto{
private:
    unsigned int codigo;
    string nome;
    double valor;
public:
    Produto();
    Produto(string, double, unsigned int);
    bool operator==(const Produto&)const;

    //GETS
    string get_nome();
    double get_valor();
    unsigned int get_codigo();

    //SETS
    void set_nome(string);
    void set_valor(double);
    void set_codigo(unsigned int);

    //OPERACOES
    void salvar_no_arquivo(Inf_arquivos*);
};

class Fornecimento{
public:
    Fornecimento();

    //Estrutura com informações sobre um determinado produto no fornecimento
    struct inf_produtos{
        Produto produto;
        unsigned int qtd;
        double valor;
    };

    unsigned int cod_venda;
    string data_do_fornecimeno;
    bool pago;
    Cliente cliente;                //quem está recebendo o fornecimento
    vector<inf_produtos> produtos;  //lista dos produtos do fornecimento

    //OPERACOES
    void salvar_no_arquivo(Inf_arquivos*);
};

class Inf_arquivos{
public:
    Inf_arquivos();
    vector<Produto> produtos;
    vector<Cliente> clientes;
};

#endif // TABELAS_H
