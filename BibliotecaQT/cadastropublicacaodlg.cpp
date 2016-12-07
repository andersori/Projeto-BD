#include "cadastropublicacaodlg.h"
#include "ui_cadastropublicacaodlg.h"

CadastroPublicacaodlg::CadastroPublicacaodlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastroPublicacaodlg)
{
    ui->setupUi(this);
}

CadastroPublicacaodlg::~CadastroPublicacaodlg()
{
    delete ui;
}
