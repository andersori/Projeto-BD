#include "professoremprestimodlg.h"
#include "ui_professoremprestimodlg.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include<QDate>

QString siape;//variaveis para pegar os dados e efetuar o emprestimo
QString codLivro;

ProfessorEmprestimoDLG::ProfessorEmprestimoDLG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProfessorEmprestimoDLG)
{
    ui->setupUi(this);
    connect(ui->ButtonCancelarEmpP, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->empButtonProf1,SIGNAL(clicked()),this, SLOT(buscarLivroProf()));
    connect(ui->empButtonProf2,SIGNAL(clicked()),this, SLOT(buscarProf()));
    connect(ui->efetuarEmprestimoButton_3,SIGNAL(clicked()),this,SLOT(efetuarEmprestimo()));
    this->con=ConnectionDB::get_con();
    QSqlDatabase bd=con->get_bd();    
}

ProfessorEmprestimoDLG::~ProfessorEmprestimoDLG()
{
    delete ui;
}
void ProfessorEmprestimoDLG::buscarLivroProf(){
    ui->tituloLivroPr->setEnabled(true);
    QSqlDatabase bd = ConnectionDB::get_bd();
    codLivro=ui->lineEdit->text();
    QString qry("SELECT titulo FROM publicacao WHERE id = "+codLivro);
    QSqlQuery resul=bd.exec(qry);
    if(resul.next()){
        QString consulta=resul.value(0).toString();
        ui->tituloLivroPr->setText(consulta);
        ui->empButtonProf2->setEnabled(true);
        ui->lineEdit_2->setEnabled(true);
    }else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO EXISTE LIVRO COM ESTE CÓDIGO, CADASTRADO."));
    }
}
void ProfessorEmprestimoDLG::buscarProf(){
    ui->nomeProf->setEnabled(true);
    QSqlDatabase bd = ConnectionDB::get_bd();
    siape=ui->lineEdit_2->text();
    QString qry("SELECT U.nome FROM professor as P, usuario as U WHERE P.id_usuario=U.id AND P.siape= "+siape);//PRECISA ALTERAR
    QSqlQuery resul=bd.exec(qry);
    if(resul.next()){
        QString consulta=resul.value(0).toString();
        ui->nomeProf->setText(consulta);
        ui->efetuarEmprestimoButton_3->setEnabled(true);
    }else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO EXISTE PROFESSOR COM ESTE SIAPE, CADASTRADO."));
    }
}

void ProfessorEmprestimoDLG::efetuarEmprestimo(){
    QSqlDatabase bd = ConnectionDB::get_bd();
    QString qry("SELECT id_usuario FROM professor WHERE siape="+siape);
    QSqlQuery busca=bd.exec(qry);
    QString id_usuario =busca.value(0).toString();//PEGANDO O ID DO USUARIO
    QString data=QDate::currentDate().toString("yyyyMdd");//PEGANDO A DATA NO MOMENTO DO EMPRESTIMO
    QDate IssueDate=QDate::currentDate();//tres prixmo linhas é só pra add 15 dias a mais na data atual, para ser a data de devolucao
    QDate ReturnDate;
    ReturnDate=IssueDate.addDays(15);
    QString dataDevolver=ReturnDate.toString("yyyyMdd");
    QString qryInsert("INSERT INTO emprestimo(id_exemplar,id_usuario,data_emprestimo,data_devedevolver,data_devolvido,qtd_renovacao)VALUES("+codLivro+","+id_usuario+","+data+","+dataDevolver+","+dataDevolver+",10");
    QSqlQuery resul=bd.exec(qryInsert);
    if(resul.exec())
        QMessageBox::warning(this,tr("EMPRÉSTIMO"),tr("EMPRÉSTIMO EFETUADO COM SUCESSO \n DATA DE DEVOLUÇÃO "));
    else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO FOI POSSIVEL EFETUAR O EMPRÉSTIMO"));
    }
}

