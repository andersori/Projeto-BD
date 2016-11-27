#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "cadastroalunodlg.h"

#include <QPixmap>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap search_user(":/resources/imgs/search_user.png");
    QIcon ico(search_user);
    ui->usuariosCadastradosBTN->setIcon(ico);
    ui->usuariosCadastradosBTN->setIconSize(search_user.rect().size());

    QPixmap find_document(":/resources/imgs/find_document.png");
    QIcon ico2(find_document);
    ui->publicacoesBTN->setIcon(ico2);
    ui->publicacoesBTN->setIconSize(find_document.rect().size());

    QPixmap loan_document(":/resources/imgs/loan_document.png");
    QIcon ico3(loan_document);
    ui->emprestimosBTN->setIcon(ico3);
    ui->emprestimosBTN->setIconSize(loan_document.rect().size());

    connect(ui->actionAlunoCad, SIGNAL(triggered()), this, SLOT(janelaCadastrarAluno()));
    connect(ui->usuariosCadastradosBTN, SIGNAL(clicked()), this, SLOT(paginaUsuarios()));
    connect(ui->emprestimosBTN, SIGNAL(clicked()), this, SLOT(paginaEmprestimos()));
    connect(ui->publicacoesBTN, SIGNAL(clicked()), this, SLOT(paginaPublicacoes()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paginaUsuarios(){
    ui->paginas->setCurrentIndex(1);
}

void MainWindow::paginaPublicacoes(){
    ui->paginas->setCurrentIndex(2);
}

void MainWindow::paginaEmprestimos(){
    ui->paginas->setCurrentIndex(3);
}

void MainWindow::janelaCadastrarAluno(){
    CadastroAlunoDLG* janela = new CadastroAlunoDLG();
    janela->exec();
}




