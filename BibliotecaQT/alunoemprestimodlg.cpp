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
    connect(ui->BotaoBuscarAl,SIGNAL(clicked()),this, SLOT(buscarLivro()));//CLICA EM BUSCAR O LIVRO METODO buscarrLivro
    this->con=ConnectionDB::get_con();
    QSqlDatabase bd=con->get_bd();   
}


AlunoEmprestimoDLG::~AlunoEmprestimoDLG(){
    delete ui;
}
void AlunoEmprestimoDLG::buscarLivro(){
    QMessageBox::warning(this,tr("ERRO"),tr("NÃO EXISTE LIVRO COM ESTE CÓDIGO, CADASTRADO."));
    ui->tituloLivroAl->setEnabled(true);
    QSqlDatabase bd = ConnectionDB::get_bd();
    QString qry("SELECT titulo FROM publicacao WHERE username = \'");
    qry.append(ui->BotaoBuscarAl->text());
    //QSqlQueryModel *modal=new QSqlQueryModel();
    QSqlQuery resul=bd.exec(qry);
    if(resul.next()){
        //modal->setQuery(resul);
        QString consulta=resul.value(0).toString();
        //ui->tituloLivroAl->setModel(consulta);
        //qDebug >>(modal->rowCount());
    }else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO EXISTE LIVRO COM ESTE CÓDIGO, CADASTRADO."));
    }
  }


