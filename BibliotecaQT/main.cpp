#include "mainwindow.h"
#include <QApplication>
#include "logindlg.h"
#include "connectiondb.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Intanciando desde o inicio do programa a variavel que sera responsavel pelo acesso ao banco
    ConnectionDB::get_con();

    //Abrindo a janela de login
    LoginDLG login;
    login.show();

    return a.exec();
}