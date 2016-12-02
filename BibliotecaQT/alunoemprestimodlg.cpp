#include "alunoemprestimodlg.h"
#include "ui_alunoemprestimodlg.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

AlunoEmprestimoDLG::AlunoEmprestimoDLG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlunoEmprestimoDLG){
    ui->setupUi(this);
    connect(ui->CanButtonEmAl, SIGNAL(clicked()), this, SLOT(close()));//CLICA EM CANCELAR FECHA A JANELA
    connect(ui->buscButtonAl,SIGNAL(clicked()),this, SLOT(buscarLivro()));//CLICA EM BUSCAR O LIVRO METODO buscarrLivro
    this->con=ConnectionDB::get_con();
    QSqlDatabase bd=con->get_bd();   
}


AlunoEmprestimoDLG::~AlunoEmprestimoDLG(){
    delete ui;
}
//void AlunoEmprestimoDLG::buscarLivro(){
  //  QString codLivro;
    //codLivro.append(ui->AlunoEmprestimoDLG.codLivroAl->);
    //QLine tituloLivro;
    //QSqlQuery consulta;
    //consulta.exec("SELECT titulo FROM publicacao WHERE id="+codLivro);
    //tituloLivro=consulta.value(0).toLine();
    //ui->tituloLivroAl->setEnabled(true);//ativando o campo do titulo do livro
    //ui->tituloLivroAl->setModel(tituloLivro);

//}
//bool criarConexão(){
  //  QSqlDatabase bd=QSqlDatabase::addDatabase("biblioteca_qt");
    //if(!bd.open()){
      //  QMessageBox::critical(0,tr("erro ao abrir o banco"),bd.lastError().text());
    //}/*


