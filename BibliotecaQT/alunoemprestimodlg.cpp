#include "alunoemprestimodlg.h"
#include "ui_alunoemprestimodlg.h"

AlunoEmprestimoDLG::AlunoEmprestimoDLG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlunoEmprestimoDLG)
{
    ui->setupUi(this);
}

AlunoEmprestimoDLG::~AlunoEmprestimoDLG()
{
    delete ui;
}
