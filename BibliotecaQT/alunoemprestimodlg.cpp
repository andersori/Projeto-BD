#include "alunoemprestimodlg.h"
#include "ui_alunoemprestimodlg.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include<QDate>

QString codigoLivro;
QString matricula;

AlunoEmprestimoDLG::AlunoEmprestimoDLG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlunoEmprestimoDLG){
    ui->setupUi(this);
    connect(ui->CanButtonEmAl, SIGNAL(clicked()), this, SLOT(close()));//CLICA EM CANCELAR FECHA A JANELA
    connect(ui->BotaoBuscarAl, SIGNAL(clicked()),this, SLOT(buscarLivro()));//CLICA EM BUSCAR O LIVRO METODO buscarrLivro
    connect(ui->buscButton_2Al,SIGNAL(clicked()),this, SLOT(buscarMatAl()));
    connect(ui->pushButton_3, SIGNAL(clicked()),this,SLOT(efetuarEmprestimoAl()));
    this->con=ConnectionDB::get_con();
    QSqlDatabase bd=con->get_bd();   
}


AlunoEmprestimoDLG::~AlunoEmprestimoDLG(){
    delete ui;
}
void AlunoEmprestimoDLG::buscarLivro(){
    ui->tituloLivroAl->setEnabled(true);//ATIVANDO O CAMPO DO TITULO DO LIVRO
    QSqlDatabase bd = ConnectionDB::get_bd();
    codigoLivro=ui->codLivroAl->text();//PEGO O COD DO LIVRO DIGITADO PELO USUARIO
    QString qry("SELECT titulo FROM publicacao WHERE id = "+codigoLivro);
    QSqlQuery resul=bd.exec(qry);
    if(resul.next()){//SE TIVER RESULTADO ENTRA AQUI
        QString consulta=resul.value(0).toString();//CONSULTO O NOME DO LIVRO PELO CODIGO
        ui->tituloLivroAl->setText(consulta);
        ui->matAluno->setEnabled(true);
        ui->buscButton_2Al->setEnabled(true);
    }else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO EXISTE LIVRO COM ESTE CÓDIGO, CADASTRADO."));
        ui->codLivroAl->clear();
    }
}
void AlunoEmprestimoDLG::buscarMatAl(){
    ui->nomeAluno->setEnabled(true);
    QSqlDatabase bd = ConnectionDB::get_bd();
    matricula=ui->matAluno->text();
    QString qry("SELECT U.nome FROM aluno as A, usuario as U WHERE A.id_usuario=U.id AND A.matricula= "+matricula);//PRECISA ALTERAR
    QSqlQuery resul=bd.exec(qry);
    if(resul.next()){
        QString consulta=resul.value(0).toString();
        ui->nomeAluno->setText(consulta);
        ui->pushButton_3->setEnabled(true);
    }else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO EXISTE ALUNO COM ESTA MATRÍCULA, CADASTRADO."));
        ui->nomeAluno->clear();
        ui->matAluno->clear();
    }
}
void AlunoEmprestimoDLG::efetuarEmprestimoAl(){
    QSqlDatabase bd = ConnectionDB::get_bd();
    QString qry("SELECT id_usuario FROM aluno WHERE matricula="+matricula);
    QSqlQuery busca=bd.exec(qry);
    busca.next();
    QString id_usuario =busca.value(0).toString();//PEGANDO O ID DO USUARIO

    //TESTANDO ESSA PARA PARA VERIFICAR SE O USUARIO TEM ALGUM LIVRO ATRASADO
    QString pendencia("SELECT data_devedevolver FROM emprestimo WHERE id_usuario="+id_usuario);
    QSqlQuery b=bd.exec(pendencia);
    int i=0;
    while(b.next()){//ESTE LAÇO É USADO PARA VERIFICAR SE TEM PENDECIA NA BIBLIOTECA
        QDate prazo=b.value(i).toDate();
        if(prazo.operator <=(QDate::currentDate())&&(prazo.isNull())){
                QMessageBox::warning(this,tr("ERRO"),tr("NÃO FOI POSSIVEL EFETUAR O EMPRESTIMO \nALUNO COM PENDENCIAS NA BIBLIOTECAS"));
                //ui->codLivroAl->clear();
                ui->matAluno->clear();
                ui->nomeAluno->clear();
                ui->tituloLivroAl->clear();
                ui->tituloLivroAl->setEnabled(false);
                ui->nomeAluno->setEnabled(false);
                ui->matAluno->setEnabled(false);
                ui->pushButton_3->setEnabled(false);
                ui->buscButton_2Al->setEnabled(false);
                return;
            }
            i++;
    }

    QString data=QDate::currentDate().toString("yyyyMdd");//PEGANDO A DATA NO MOMENTO DO EMPRESTIMO
    QDate IssueDate=QDate::currentDate();//tres prixmo linhas é só pra add 15 dias a mais na data atual, para ser a data de devolucao
    QDate ReturnDate;
    ReturnDate=IssueDate.addDays(15);
    QString dataDevolver=ReturnDate.toString("yyyyMdd");

    QSqlQuery tent;
    tent.prepare("INSERT INTO emprestimo(id_exemplar,id_usuario,data_emprestimo,data_devedevolver,qtd_renovacao)"
                 "VALUES(:id_exemplar,:id_usuario,:data_emprestimo,:data_devedevolver, :qtd_renovacao)");
    tent.bindValue(":id_exemplar",codigoLivro);
    tent.bindValue(":id_usuario",id_usuario);
    tent.bindValue(":data_emprestimo",data);
    tent.bindValue(":data_devedevolver",dataDevolver);
    tent.bindValue(":qtd_renovacao",10);

    if(tent.exec()){
        QMessageBox mens;
        mens.setWindowTitle("EMPRÉSTIMO REALIZADO");
        mens.setText("USUÁRIO TEM ATÉ "+ReturnDate.toString("dd/M/yyyy")+"\nPARA REALIZAR A DEVOLUÇÃO");
        mens.exec();
        ui->codLivroAl->clear();
        ui->matAluno->clear();
        ui->nomeAluno->clear();
        ui->tituloLivroAl->clear();
        ui->tituloLivroAl->setEnabled(false);
        ui->nomeAluno->setEnabled(false);
        ui->matAluno->setEnabled(false);
        ui->pushButton_3->setEnabled(false);
        ui->buscButton_2Al->setEnabled(false);
    }
    else{
        QMessageBox::warning(this,tr("ERRO"),tr("NÃO FOI POSSIVEL EFETUAR O EMPRÉSTIMO"));
        ui->codLivroAl->clear();
        ui->matAluno->clear();
        ui->nomeAluno->clear();
        ui->tituloLivroAl->clear();
        ui->tituloLivroAl->setEnabled(false);
        ui->nomeAluno->setEnabled(false);
        ui->matAluno->setEnabled(false);
        ui->pushButton_3->setEnabled(false);
        ui->buscButton_2Al->setEnabled(false);
    }
}
