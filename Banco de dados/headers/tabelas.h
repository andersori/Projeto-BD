#ifndef TABELAS_H_INCLUDED
#define TABELAS_H_INCLUDED

typedef enum{               //Definindo um enum para usar o "true" e o "false", pois no 'c' não existe o tipo de dado "boolean"
    true = 1, false = 0     //O valor de "true" é 1 e o "false" é 0
}boolean;

typedef struct{             //Estrutura da tabela Cliente
    unsigned int codigo;    //O codigo é um número inteiro não negativo
    char* nome;             //Cadeia de caracteres
    char* tipo;             //Cadeia de caracteres
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
