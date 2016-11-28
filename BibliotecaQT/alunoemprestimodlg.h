#ifndef ALUNOEMPRESTIMODLG_H
#define ALUNOEMPRESTIMODLG_H

#include <QDialog>

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
};

#endif // ALUNOEMPRESTIMODLG_H
