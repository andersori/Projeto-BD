/********************************************************************************
** Form generated from reading UI file 'alunoemprestimodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALUNOEMPRESTIMODLG_H
#define UI_ALUNOEMPRESTIMODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AlunoEmprestimoDLG
{
public:

    void setupUi(QDialog *AlunoEmprestimoDLG)
    {
        if (AlunoEmprestimoDLG->objectName().isEmpty())
            AlunoEmprestimoDLG->setObjectName(QStringLiteral("AlunoEmprestimoDLG"));
        AlunoEmprestimoDLG->resize(400, 300);

        retranslateUi(AlunoEmprestimoDLG);

        QMetaObject::connectSlotsByName(AlunoEmprestimoDLG);
    } // setupUi

    void retranslateUi(QDialog *AlunoEmprestimoDLG)
    {
        AlunoEmprestimoDLG->setWindowTitle(QApplication::translate("AlunoEmprestimoDLG", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class AlunoEmprestimoDLG: public Ui_AlunoEmprestimoDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALUNOEMPRESTIMODLG_H
