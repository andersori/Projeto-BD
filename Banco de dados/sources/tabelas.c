#include "../headers/tabelas.h"

#include <stdlib.h>

boolean cadastar_cliente(char* nome, char* tipo){
    Cliente* novoClient = malloc(sizeof(Cliente));  //Criando um cliente

    if(novoClient != NULL){
        novoClient->nome = nome;    //Setando o nome dele
        novoClient->tipo = tipo;    //Setando o tipo dele

        free(novoClient);   //Liberando o espaço que eu aloquei no inicio

        return true;
    }
    return false;
}
