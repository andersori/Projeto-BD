#ifndef CADASTROALUNODLG_H
#define CADASTROALUNODLG_H

#include <QDialog>
#include "connectiondb.h"

namespace Ui {
class CadastroAlunoDLG;
}

class CadastroAlunoDLG : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroAlunoDLG(QWidget *parent = 0);
    ~CadastroAlunoDLG();

private:
    Ui::CadastroAlunoDLG *ui;
    ConnectionDB* con;
};

#endif // CADASTROALUNODLG_H
