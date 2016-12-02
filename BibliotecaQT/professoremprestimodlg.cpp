#include "professoremprestimodlg.h"
#include "ui_professoremprestimodlg.h"

ProfessorEmprestimoDLG::ProfessorEmprestimoDLG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProfessorEmprestimoDLG)
{
    ui->setupUi(this);
    connect(ui->ButtonCancelarEmpP, SIGNAL(clicked()), this, SLOT(close()));
}

ProfessorEmprestimoDLG::~ProfessorEmprestimoDLG()
{
    delete ui;
}
