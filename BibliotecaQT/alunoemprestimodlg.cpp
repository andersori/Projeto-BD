#include "alunoemprestimodlg.h"
#include "ui_alunoemprestimodlg.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

AlunoEmprestimoDLG::AlunoEmprestimoDLG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlunoEmprestimoDLG)
{
    ui->setupUi(this);
    this->con=ConnectionDB::get_con();
    QSqlDatabase bd=con->get_bd();

}

AlunoEmprestimoDLG::~AlunoEmprestimoDLG()
{
    delete ui;
}
