#include "../headers/tabelas.h"

#include <stdlib.h>
#include <stdio.h>

//Algumas variaveis globais
unsigned int qtd_clientes = 0;
unsigned int qtd_produtos = 0;

void cadastar_cliente(char* nome, char* tipo, unsigned int codigo){
    FILE* arquivo = fopen("arquivos/cliente.txt", "a"); //Abre o arquivo para escrita no final do arquivo 'a'.
                                                        //Não apaga o conteúdo pré-existente.

    if( arquivo == NULL){   //Se o ponteiro para o arquivo estiver apontando para NULL, o arquivo naão foi aberto.
        printf("O arquivo nao pode ser aberto. A operacao nao foi concluida!");
        arquivo = NULL;
        return;
    }


    fprintf(arquivo, "#%s, %s, %d\n", nome, tipo, codigo);  //Formatando os dados digitados(#nome, tipo, codigo)
                                                            //e colocando no final do arquivo.
    fclose(arquivo);    //Fechando o arquivo, pois manter ele aberto nao é mais necessario.

    qtd_clientes++;
}

void cadastar_produto(unsigned int codigo, double preco, char* descricao){
    FILE* arquivo = fopen("arquivos/produto.txt", "a"); //Abre o arquivo para escrita no final do arquivo 'a'.
                                                        //Não apaga o conteúdo pré-existente.

    if( arquivo == NULL){   //Se o ponteiro para o arquivo estiver apontando para NULL, o arquivo naão foi aberto.
        printf("O arquivo nao pode ser aberto. A operacao nao foi concluida!");
        arquivo = NULL;
        return;
    }

    fprintf(arquivo,"#%s, %f, %d\n", descricao, preco, codigo); //Formatando os dados digitados(#descrição, preço, codigo)
                                                                //e colocando no final do arquivo.

    fclose(arquivo);

    qtd_produtos++;
}

void cadastar_fornecimento(unsigned int cod_venda, char* data_do_fornecimento,
                        unsigned int qtd_produtos_comprados, boolean pago, unsigned int cod_produto, unsigned int cod_cliente){

    FILE* arquivo_fornecimento = fopen("arquivos/fornecimento.txt", "a");    //Abre o arquivo para escrita no final do arquivo 'a'.
                                                                            //Não apaga o conteúdo pré-existente.

    //Arquivos para efetuar uma busca para determinar se um cliente estar ou nao nos arquivos de PRODUTO e CLIENTE
    FILE* arquivo_cliente = fopen("arquivos/cliente.txt", "r");
    FILE* arquivo_produto = fopen("arquivos/produto.txt", "r");

    //Verificando se algum ponteiro estar apontando para NULL, se estiver deu algum erro ao ler o arquivo
    if(arquivo_fornecimento == NULL || arquivo_cliente == NULL || arquivo_produto == NULL){

        printf("O arquivo nao pode ser aberto. A operacao nao foi concluida!");
        arquivo_fornecimento = NULL;
        arquivo_cliente = NULL;
        arquivo_produto = NULL;
        return;
    }

    //TEM QUE USAR UM ALGORITMO DE BUSCA PARA
    //VERIFICAR SE O cod_prduto E cod_cliente ESTÃO NOS ARQUIVOS DE CLIENTES E PRODUTOS

    unsigned int* list_cod_cli = malloc(sizeof(unsigned int) * qtd_clientes);
    unsigned int* list_cod_pro = malloc(sizeof(unsigned int) * qtd_produtos);

    unsigned int i;
    if(fread(list_cod_cli, sizeof(unsigned int), qtd_clientes, arquivo_cliente) == qtd_clientes){
        printf("Todos os dados forão lidos\n");
    }

    free(list_cod_cli);
    free(list_cod_pro);
}


