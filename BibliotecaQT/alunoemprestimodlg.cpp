#include "alunoemprestimodlg.h"
#include "ui_alunoemprestimodlg.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

AlunoEmprestimoDLG::AlunoEmprestimoDLG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlunoEmprestimoDLG){
    ui->setupUi(this);
    connect(ui->CanButtonEmAl, SIGNAL(clicked()), this, SLOT(close()));//CLICA EM CANCELAR FECHA A JANELA
    connect(ui->BotaoBuscarAl, SIGNAL(clicked()),this, SLOT(buscarLivro()));//CLICA EM BUSCAR O LIVRO METODO buscarrLivro
    connect(ui->buscButton_2Al,SIGNAL(clicked()),this, SLOT(buscarMatAl()));
    this->con=ConnectionDB::get_con();
    QSqlDatabase bd=con->get_bd();   
}


AlunoEmprestimoDLG::~AlunoEmprestimoDLG(){
    delete ui;
}
void AlunoEmprestimoDLG::buscarLivro(){
    ui->tituloLivroAl->setEnabled(true);
    QSqlDatabase bd = ConnectionDB::get_bd();
    QString cod=ui->codLivroAl->text();
    QString qry("SELECT titulo FROM publicacao WHERE id = "+cod);
    QSqlQuery resul=bd.exec(qry);
    if(resul.next()){
        QString consulta=resul.value(0).toString();
        ui->tituloLivroAl->setText(consulta);
        ui->matAluno->setEnabled(true);
        ui->buscButton_2Al->setEnabled(true);
    }else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO EXISTE LIVRO COM ESTE CÓDIGO, CADASTRADO."));
    }
}
void AlunoEmprestimoDLG::buscarMatAl(){
    ui->nomeAluno->setEnabled(true);
    QSqlDatabase bd = ConnectionDB::get_bd();
    QString matricula=ui->matAluno->text();
    QString qry("SELECT U.nome FROM aluno as A, usuario as U WHERE A.id_usuario=U.id AND A.matricula= "+matricula);//PRECISA ALTERAR
    QSqlQuery resul=bd.exec(qry);
    if(resul.next()){
        QString consulta=resul.value(0).toString();
        ui->nomeAluno->setText(consulta);
        ui->pushButton_3->setEnabled(true);
    }else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO EXISTE ALUNO COM ESTA MATRÍCULA, CADASTRADO."));
    }
}
