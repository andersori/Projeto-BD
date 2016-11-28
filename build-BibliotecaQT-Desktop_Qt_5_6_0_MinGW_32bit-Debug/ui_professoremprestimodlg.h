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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ProfessorEmprestimoDLG
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *ProfessorEmprestimoDLG)
    {
        if (ProfessorEmprestimoDLG->objectName().isEmpty())
            ProfessorEmprestimoDLG->setObjectName(QStringLiteral("ProfessorEmprestimoDLG"));
        ProfessorEmprestimoDLG->resize(400, 300);
        lineEdit = new QLineEdit(ProfessorEmprestimoDLG);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 70, 151, 20));
        label = new QLabel(ProfessorEmprestimoDLG);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 81, 16));
        label_2 = new QLabel(ProfessorEmprestimoDLG);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 130, 121, 16));
        lineEdit_2 = new QLineEdit(ProfessorEmprestimoDLG);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 150, 151, 20));
        lineEdit_3 = new QLineEdit(ProfessorEmprestimoDLG);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 70, 191, 20));
        label_3 = new QLabel(ProfessorEmprestimoDLG);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 50, 71, 16));
        lineEdit_4 = new QLineEdit(ProfessorEmprestimoDLG);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 150, 191, 20));
        label_4 = new QLabel(ProfessorEmprestimoDLG);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 130, 91, 16));
        pushButton = new QPushButton(ProfessorEmprestimoDLG);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 100, 75, 23));
        pushButton_2 = new QPushButton(ProfessorEmprestimoDLG);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 180, 75, 23));
        pushButton_3 = new QPushButton(ProfessorEmprestimoDLG);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 270, 111, 23));
        pushButton_4 = new QPushButton(ProfessorEmprestimoDLG);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 270, 75, 23));

        retranslateUi(ProfessorEmprestimoDLG);

        QMetaObject::connectSlotsByName(ProfessorEmprestimoDLG);
    } // setupUi

    void retranslateUi(QDialog *ProfessorEmprestimoDLG)
    {
        ProfessorEmprestimoDLG->setWindowTitle(QApplication::translate("ProfessorEmprestimoDLG", "Dialog", 0));
        label->setText(QApplication::translate("ProfessorEmprestimoDLG", "C\303\263digo do Livro", 0));
        label_2->setText(QApplication::translate("ProfessorEmprestimoDLG", "Matr\303\255cula do professor", 0));
        label_3->setText(QApplication::translate("ProfessorEmprestimoDLG", "T\303\255tulo do Livro", 0));
        label_4->setText(QApplication::translate("ProfessorEmprestimoDLG", "Nome do professor", 0));
        pushButton->setText(QApplication::translate("ProfessorEmprestimoDLG", "Buscar", 0));
        pushButton_2->setText(QApplication::translate("ProfessorEmprestimoDLG", "Buscar", 0));
        pushButton_3->setText(QApplication::translate("ProfessorEmprestimoDLG", "Efetuar empr\303\251stimo", 0));
        pushButton_4->setText(QApplication::translate("ProfessorEmprestimoDLG", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class ProfessorEmprestimoDLG: public Ui_ProfessorEmprestimoDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSOREMPRESTIMODLG_H
