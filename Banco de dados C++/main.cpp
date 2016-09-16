#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "tabelas.h"
using namespace std;



int main()
{
    int opcao;

    do{
        cout<<"1 - Cadastrar cliente "<<endl;
        cout<<"2 - Cadastrar produto "<<endl;
        cout<<"3 - Cadastrar fornecimento "<<endl;
        cout<<"8 - Sair"<<endl;
        cout<<"->";
        cin>>opcao;

        switch(opcao){
            case 1:{
                string nome;
                string tipo;
                unsigned int cod;

                system("cls");
                cout<<"--CADASTRAR CLIENTE--"<<endl<<endl;

                cout<<"Nome: ";
                fflush(stdin);
                getline(cin, nome);

                cout<<"Tipo: ";
                fflush(stdin);
                getline(cin, tipo);

                cout<<"Codigo: ";
                fflush(stdin);
                cin >> cod;

                Cliente cli(nome, tipo, cod);
                cli.salvar_no_arquivo();
                break;

            }
            case 2:{
                string nome;
                double valor;
                unsigned int cod;

                system("cls");
                cout<<"--CADASTRAR PRODUTO--"<<endl<<endl;

                cout<<"Nome: ";
                fflush(stdin);
                getline(cin, nome);

                cout<<"Valor: ";
                fflush(stdin);
                cin >> valor;

                cout<<"Codigo: ";
                cin >> cod;

                Produto pro(nome, valor, cod);
                pro.salvar_no_arquivo();

                break;
            }
            case 3:{
                break;
            }
            default:{
                break;
            }
        }

        system("cls");
    }while(opcao != 8);

    cout << "Hello world!" << endl;
    return 0;
}
