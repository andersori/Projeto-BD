#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/resources/imgs/search_user.png");
    QIcon ico(pix);

    ui->usuariosCadastradosBTN->setIcon(ico);
    ui->usuariosCadastradosBTN->setIconSize(pix.rect().size());





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




