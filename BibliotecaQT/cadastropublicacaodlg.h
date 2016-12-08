#ifndef CADASTROPUBLICACAODLG_H
#define CADASTROPUBLICACAODLG_H

#include <QDialog>

namespace Ui {
class CadastroPublicacaodlg;
}

class CadastroPublicacaodlg : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroPublicacaodlg(QWidget *parent = 0);
    ~CadastroPublicacaodlg();

private:
    Ui::CadastroPublicacaodlg *ui;
};

#endif // CADASTROPUBLICACAODLG_H
