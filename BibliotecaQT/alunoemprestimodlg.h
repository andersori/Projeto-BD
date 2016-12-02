#ifndef ALUNOEMPRESTIMODLG_H
#define ALUNOEMPRESTIMODLG_H

#include <QDialog>
#include "connectiondb.h"

namespace Ui {
class AlunoEmprestimoDLG;
}

class AlunoEmprestimoDLG : public QDialog
{
    Q_OBJECT

public:
    explicit AlunoEmprestimoDLG(QWidget *parent = 0);
    ~AlunoEmprestimoDLG();

private:
    Ui::AlunoEmprestimoDLG *ui;
    ConnectionDB* con;

    void buscarLivro();
};

#endif // ALUNOEMPRESTIMODLG_H
