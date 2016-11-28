#ifndef PROFESSOREMPRESTIMODLG_H
#define PROFESSOREMPRESTIMODLG_H

#include <QDialog>

namespace Ui {
class ProfessorEmprestimoDLG;
}

class ProfessorEmprestimoDLG : public QDialog
{
    Q_OBJECT

public:
    explicit ProfessorEmprestimoDLG(QWidget *parent = 0);
    ~ProfessorEmprestimoDLG();

private:
    Ui::ProfessorEmprestimoDLG *ui;
};

#endif // PROFESSOREMPRESTIMODLG_H
