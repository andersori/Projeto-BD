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
    //qry.append(ui->codLivroAl->text());
    //QSqlQueryModel *modal=new QSqlQueryModel();
    QSqlQuery resul=bd.exec(qry);
    //QSqlQueryModel* model = new QSqlQueryModel();
    //QSqlQuery* qry=new QSqlQuery(bd);
    //QString cod=ui->codLivroAl->text();
    //qry->prepare("SELECT titulo FROM publicacao WHERE username = "+cod);
    //model->setQuery(*qry);
    //ui->tituloLivroAl->setModel(model);
    if(resul.next()){
        QString consulta=resul.value(0).toString();
        //ui->tituloLivroAl->
        //qDebug >>(modal->rowCount());
    }else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO EXISTE LIVRO COM ESTE CÓDIGO, CADASTRADO."));
    }
}
