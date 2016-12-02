#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "cadastroalunodlg.h"
#include "alunoemprestimodlg.h"
#include "professoremprestimodlg.h"
#include "ajudadlg.h"

#include <QPixmap>
#include <QIcon>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

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

    connect(ui->actionAlunoCad, SIGNAL(triggered()), this, SLOT(janelaCadastrarAluno()));//COMANDO PARA ABRIR OUTRA JANELA - TIPO REFERENCIAR OUTRA JANELA
    connect(ui->usuariosCadastradosBTN, SIGNAL(clicked()), this, SLOT(paginaUsuarios()));//usuariosCadastradosBTN É UM BOTAO QUANDO APERTADO VAI ABRIR A PAGINA paginaUsuarios
    connect(ui->emprestimosBTN, SIGNAL(clicked()), this, SLOT(paginaEmprestimos()));//SIGNAL É APOREÇÃO FEITA COM O SLOT QUE É APGINA
    connect(ui->publicacoesBTN, SIGNAL(clicked()), this, SLOT(paginaPublicacoes()));
    connect(ui->buscarBTN, SIGNAL(clicked()), this, SLOT(buscarUsuarios()));
    connect(ui->actionAlunoEmp,SIGNAL(triggered()),this,SLOT(janelaEmprestimoAluno()));
    connect(ui->actionProfessorEmp,SIGNAL(triggered()),this,SLOT(janelaEmprestimoProf()));
    connect(ui->menuSobre, SIGNAL(clicked()), this, SLOT(janelaAjuda()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paginaUsuarios(){//OQUE FAZER COM AS APERAÇÕES DE CIMA
    ui->paginas->setCurrentIndex(1);//1 SERIA A TRANSIÇÃO DA PAGINA, QUAL PAGINA ELA VAI
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
void MainWindow::janelaEmprestimoAluno(){
    AlunoEmprestimoDLG* janela=new AlunoEmprestimoDLG();
    janela->exec();
}
void MainWindow::janelaEmprestimoProf(){
    ProfessorEmprestimoDLG* janela=new ProfessorEmprestimoDLG();
    janela->exec();
}
//<<<<<<< HEAD
void MainWindow::janelaAjuda(){
    ajudaDlg* janela = new ajudaDlg();
    janela->exec();
}
void MainWindow::buscarUsuarios(){
    QSqlDatabase bd = ConnectionDB::get_bd();

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery* qry = new QSqlQuery(bd);

    qry->prepare("SELECT * FROM usuario");

    qry->exec();

    model->setQuery(*qry);

    ui->usuarioTable->setModel(model);
}





