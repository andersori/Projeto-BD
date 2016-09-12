#include <stdio.h>
#include <stdlib.h>
#include "headers/tabelas.h"

int main()
{
    int opcao;

    do{
        system("cls");
        printf("1 - Cadastrar cliente\n");
        printf("2 - Cadastrar produto\n");
        printf("3 - Definir fornecimento\n");
        printf("8 - Sair\n");
        printf("-> ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:{
                char nome[20];
                char tipo[20];

                printf("Nome: ");
                scanf("%s", nome);
                printf("Tipo: ");
                scanf("%s", tipo);

                cadastar_cliente(nome, tipo);

                break;
            }
            case 2:{
                break;
            }
            case 3:{
                break;
            }
            default:{
                break;
            }
        }

    }while(opcao != 8);

    return 0;
}
