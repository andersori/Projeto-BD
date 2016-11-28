/********************************************************************************
** Form generated from reading UI file 'professoremprestimodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSOREMPRESTIMODLG_H
#define UI_PROFESSOREMPRESTIMODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ProfessorEmprestimoDLG
{
public:

    void setupUi(QDialog *ProfessorEmprestimoDLG)
    {
        if (ProfessorEmprestimoDLG->objectName().isEmpty())
            ProfessorEmprestimoDLG->setObjectName(QStringLiteral("ProfessorEmprestimoDLG"));
        ProfessorEmprestimoDLG->resize(400, 300);

        retranslateUi(ProfessorEmprestimoDLG);

        QMetaObject::connectSlotsByName(ProfessorEmprestimoDLG);
    } // setupUi

    void retranslateUi(QDialog *ProfessorEmprestimoDLG)
    {
        ProfessorEmprestimoDLG->setWindowTitle(QApplication::translate("ProfessorEmprestimoDLG", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ProfessorEmprestimoDLG: public Ui_ProfessorEmprestimoDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSOREMPRESTIMODLG_H
