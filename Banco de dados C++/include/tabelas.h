#ifndef TABELAS_H
#define TABELAS_H

#include <string>
#include <vector>
#include <algorithm>

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
    bool operator==(const Cliente&)const;

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
    bool operator==(const Fornecimento&) const;

    //Estrutura com informações sobre um determinado produto no fornecimento
    struct inf_produtos{
        unsigned int cod_produto;
        unsigned int qtd;
        double valor;
    };

    unsigned int cod_venda;
    string data_do_fornecimeno;
    string data_da_entrega;
    bool pago;
    unsigned int cod_cliente;                //quem está recebendo o fornecimento
    vector<inf_produtos> produtos;  //lista dos produtos do fornecimento

    //OPERACOES
    void salvar_no_arquivo(Inf_arquivos*);
};

class Inf_arquivos{
public:
    Inf_arquivos();

    vector<Produto> produtos;
    vector<Cliente> clientes;
    vector<Fornecimento> fornecimentos;

    void relatorio_de_venda(unsigned int);
    void valor_total_fornecimento(unsigned int);
    void listar_prod_venda(unsigned int);
    void listar_devedores();
    void listar_clientes();
    void listar_produtos();
};

#endif // TABELAS_H
