/********************************************************************************
** Form generated from reading UI file 'cadastroalunodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROALUNODLG_H
#define UI_CADASTROALUNODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CadastroAlunoDLG
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *cadastrarBTN;
    QPushButton *cancelarBTN;
    QVBoxLayout *verticalLayout_6;
    QLabel *informacoesP;
    QVBoxLayout *verticalLayout;
    QLabel *nomeLB;
    QLineEdit *nomeLE;
    QVBoxLayout *verticalLayout_2;
    QLabel *emailLB;
    QLineEdit *emailLE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *data_de_nacimentoLB;
    QSpacerItem *horizontalSpacer_5;
    QDateEdit *data_de_nacimentoDE;
    QVBoxLayout *verticalLayout_4;
    QLabel *telefoneLB;
    QLineEdit *telefoneLE;
    QSpacerItem *verticalSpacer;
    QLabel *informacoesE;
    QHBoxLayout *horizontalLayout_8;
    QLabel *cidadeLB;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *cidadeLE;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ufLB;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *ufLE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ruaLB;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *ruaLE;
    QHBoxLayout *horizontalLayout_6;
    QLabel *bairroLB;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *bairroLE;
    QHBoxLayout *horizontalLayout_7;
    QLabel *num_casaLB;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *num_casaLE;
    QVBoxLayout *verticalLayout_5;
    QLabel *informacoesC;
    QVBoxLayout *verticalLayout_3;
    QLabel *matriculaLB;
    QLineEdit *matriculaLE;
    QVBoxLayout *verticalLayout_7;
    QLabel *cursoLB;
    QComboBox *cursoCBX;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *CadastroAlunoDLG)
    {
        if (CadastroAlunoDLG->objectName().isEmpty())
            CadastroAlunoDLG->setObjectName(QStringLiteral("CadastroAlunoDLG"));
        CadastroAlunoDLG->resize(502, 386);
        gridLayout = new QGridLayout(CadastroAlunoDLG);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        cadastrarBTN = new QPushButton(CadastroAlunoDLG);
        cadastrarBTN->setObjectName(QStringLiteral("cadastrarBTN"));

        horizontalLayout_9->addWidget(cadastrarBTN);

        cancelarBTN = new QPushButton(CadastroAlunoDLG);
        cancelarBTN->setObjectName(QStringLiteral("cancelarBTN"));

        horizontalLayout_9->addWidget(cancelarBTN);


        gridLayout->addLayout(horizontalLayout_9, 2, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        informacoesP = new QLabel(CadastroAlunoDLG);
        informacoesP->setObjectName(QStringLiteral("informacoesP"));

        verticalLayout_6->addWidget(informacoesP);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nomeLB = new QLabel(CadastroAlunoDLG);
        nomeLB->setObjectName(QStringLiteral("nomeLB"));

        verticalLayout->addWidget(nomeLB);

        nomeLE = new QLineEdit(CadastroAlunoDLG);
        nomeLE->setObjectName(QStringLiteral("nomeLE"));

        verticalLayout->addWidget(nomeLE);


        verticalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        emailLB = new QLabel(CadastroAlunoDLG);
        emailLB->setObjectName(QStringLiteral("emailLB"));

        verticalLayout_2->addWidget(emailLB);

        emailLE = new QLineEdit(CadastroAlunoDLG);
        emailLE->setObjectName(QStringLiteral("emailLE"));

        verticalLayout_2->addWidget(emailLE);


        verticalLayout_6->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        data_de_nacimentoLB = new QLabel(CadastroAlunoDLG);
        data_de_nacimentoLB->setObjectName(QStringLiteral("data_de_nacimentoLB"));

        horizontalLayout_3->addWidget(data_de_nacimentoLB);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        data_de_nacimentoDE = new QDateEdit(CadastroAlunoDLG);
        data_de_nacimentoDE->setObjectName(QStringLiteral("data_de_nacimentoDE"));

        horizontalLayout_3->addWidget(data_de_nacimentoDE);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        telefoneLB = new QLabel(CadastroAlunoDLG);
        telefoneLB->setObjectName(QStringLiteral("telefoneLB"));

        verticalLayout_4->addWidget(telefoneLB);

        telefoneLE = new QLineEdit(CadastroAlunoDLG);
        telefoneLE->setObjectName(QStringLiteral("telefoneLE"));

        verticalLayout_4->addWidget(telefoneLE);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        informacoesE = new QLabel(CadastroAlunoDLG);
        informacoesE->setObjectName(QStringLiteral("informacoesE"));

        verticalLayout_6->addWidget(informacoesE);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        cidadeLB = new QLabel(CadastroAlunoDLG);
        cidadeLB->setObjectName(QStringLiteral("cidadeLB"));

        horizontalLayout_8->addWidget(cidadeLB);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        cidadeLE = new QLineEdit(CadastroAlunoDLG);
        cidadeLE->setObjectName(QStringLiteral("cidadeLE"));

        horizontalLayout_8->addWidget(cidadeLE);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ufLB = new QLabel(CadastroAlunoDLG);
        ufLB->setObjectName(QStringLiteral("ufLB"));

        horizontalLayout_5->addWidget(ufLB);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        ufLE = new QLineEdit(CadastroAlunoDLG);
        ufLE->setObjectName(QStringLiteral("ufLE"));

        horizontalLayout_5->addWidget(ufLE);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        ruaLB = new QLabel(CadastroAlunoDLG);
        ruaLB->setObjectName(QStringLiteral("ruaLB"));

        horizontalLayout_4->addWidget(ruaLB);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        ruaLE = new QLineEdit(CadastroAlunoDLG);
        ruaLE->setObjectName(QStringLiteral("ruaLE"));

        horizontalLayout_4->addWidget(ruaLE);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        bairroLB = new QLabel(CadastroAlunoDLG);
        bairroLB->setObjectName(QStringLiteral("bairroLB"));

        horizontalLayout_6->addWidget(bairroLB);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        bairroLE = new QLineEdit(CadastroAlunoDLG);
        bairroLE->setObjectName(QStringLiteral("bairroLE"));

        horizontalLayout_6->addWidget(bairroLE);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        num_casaLB = new QLabel(CadastroAlunoDLG);
        num_casaLB->setObjectName(QStringLiteral("num_casaLB"));

        horizontalLayout_7->addWidget(num_casaLB);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        num_casaLE = new QLineEdit(CadastroAlunoDLG);
        num_casaLE->setObjectName(QStringLiteral("num_casaLE"));

        horizontalLayout_7->addWidget(num_casaLE);


        verticalLayout_6->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 3, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        informacoesC = new QLabel(CadastroAlunoDLG);
        informacoesC->setObjectName(QStringLiteral("informacoesC"));

        verticalLayout_5->addWidget(informacoesC);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        matriculaLB = new QLabel(CadastroAlunoDLG);
        matriculaLB->setObjectName(QStringLiteral("matriculaLB"));

        verticalLayout_3->addWidget(matriculaLB);

        matriculaLE = new QLineEdit(CadastroAlunoDLG);
        matriculaLE->setObjectName(QStringLiteral("matriculaLE"));

        verticalLayout_3->addWidget(matriculaLE);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        cursoLB = new QLabel(CadastroAlunoDLG);
        cursoLB->setObjectName(QStringLiteral("cursoLB"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cursoLB->sizePolicy().hasHeightForWidth());
        cursoLB->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(cursoLB);

        cursoCBX = new QComboBox(CadastroAlunoDLG);
        cursoCBX->setObjectName(QStringLiteral("cursoCBX"));
        sizePolicy.setHeightForWidth(cursoCBX->sizePolicy().hasHeightForWidth());
        cursoCBX->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(cursoCBX);


        verticalLayout_5->addLayout(verticalLayout_7);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);


        retranslateUi(CadastroAlunoDLG);

        QMetaObject::connectSlotsByName(CadastroAlunoDLG);
    } // setupUi

    void retranslateUi(QDialog *CadastroAlunoDLG)
    {
        CadastroAlunoDLG->setWindowTitle(QApplication::translate("CadastroAlunoDLG", "Dialog", 0));
        cadastrarBTN->setText(QApplication::translate("CadastroAlunoDLG", "Cadastrar", 0));
        cancelarBTN->setText(QApplication::translate("CadastroAlunoDLG", "Cancelar", 0));
        informacoesP->setText(QApplication::translate("CadastroAlunoDLG", "Informa\303\247\303\265es pessoais", 0));
        nomeLB->setText(QApplication::translate("CadastroAlunoDLG", "Nome", 0));
        emailLB->setText(QApplication::translate("CadastroAlunoDLG", "E-mail", 0));
        data_de_nacimentoLB->setText(QApplication::translate("CadastroAlunoDLG", "Data de Nascimento", 0));
        telefoneLB->setText(QApplication::translate("CadastroAlunoDLG", "Telefone", 0));
        informacoesE->setText(QApplication::translate("CadastroAlunoDLG", "Informa\303\247\303\265s sobre o endere\303\247o", 0));
        cidadeLB->setText(QApplication::translate("CadastroAlunoDLG", "Cidade", 0));
        ufLB->setText(QApplication::translate("CadastroAlunoDLG", "UF", 0));
        ruaLB->setText(QApplication::translate("CadastroAlunoDLG", "Rua", 0));
        bairroLB->setText(QApplication::translate("CadastroAlunoDLG", "Bairro", 0));
        num_casaLB->setText(QApplication::translate("CadastroAlunoDLG", "Numero da Casa", 0));
        informacoesC->setText(QApplication::translate("CadastroAlunoDLG", "Informa\303\247\303\265es sobre o curso", 0));
        matriculaLB->setText(QApplication::translate("CadastroAlunoDLG", "Matr\303\255cula", 0));
        cursoLB->setText(QApplication::translate("CadastroAlunoDLG", "Curso", 0));
    } // retranslateUi

};

namespace Ui {
    class CadastroAlunoDLG: public Ui_CadastroAlunoDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROALUNODLG_H
