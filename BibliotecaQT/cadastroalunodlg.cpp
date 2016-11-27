#include "cadastroalunodlg.h"
#include "ui_cadastroalunodlg.h"

#include <QDebug>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

CadastroAlunoDLG::CadastroAlunoDLG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastroAlunoDLG)
{
    this->con = ConnectionDB::get_con();
    ui->setupUi(this);

    QSqlDatabase bd = con->get_bd();

    QString nomes_de_curssos(tr("SELECT nome FROM curso;"));
    QSqlQuery qry_course = bd.exec(nomes_de_curssos);

    if(qry_course.isValid()) {
        qDebug() << qry_course.lastQuery();
        qDebug() << qry_course.lastError();
     }
     else
     {
        while(qry_course.next())
        {
         ui->cursoCBX->addItem(qry_course.value(0).toString());
        }
     }

    connect(ui->cancelarBTN, SIGNAL(clicked()), this, SLOT(close()));
}

CadastroAlunoDLG::~CadastroAlunoDLG()
{
    delete ui;
}
