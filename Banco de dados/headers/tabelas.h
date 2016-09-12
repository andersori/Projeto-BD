#ifndef TABELAS_H_INCLUDED
#define TABELAS_H_INCLUDED

typedef enum{
    true = 1, false = 0
}boolean;

typedef struct{
    unsigned int codigo;
    char* nome;
    char* tipo;
}Cliente;

typedef struct{
    unsigned int codigo;
    char* descricao;
    double valor;
}Produto;

typedef struct{
    unsigned int cod_venda;
    char* data;
    unsigned int qtd;
    boolean pago;
}Fornecimento;


boolean cadastar_cliente(char*, char*);

#endif // TABELAS_H_INCLUDED
