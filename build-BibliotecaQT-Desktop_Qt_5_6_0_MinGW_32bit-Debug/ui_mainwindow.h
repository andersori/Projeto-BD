/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFuncionario;
    QAction *actionPublicacao;
    QAction *actionAlunoCad;
    QAction *actionProfessorCad;
    QAction *actionAlunoEmp;
    QAction *actionProfessorEmp;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *usuariosCadastradosBTN;
    QPushButton *publicacoesBTN;
    QPushButton *emprestimosBTN;
    QStackedWidget *paginas;
    QWidget *inicialPG;
    QWidget *usuariosPG;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *buscarPorLB;
    QComboBox *tipoDeBuscaUsuarioCB;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *pesquisaUsuarioLE;
    QPushButton *buscarBTN;
    QTableView *usuarioTable;
    QWidget *publicacoesPG;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *tipoDeBuscaPublicacaoCB;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *publicacaoLivroCheck;
    QCheckBox *publicacaoRevistaCheck;
    QCheckBox *publicacaoPeriodicosCheck;
    QCheckBox *publicacaoArtigoCheck;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *pesquisaPublicacaoLE;
    QPushButton *buscarPublicacoesBTN;
    QTableView *publicacoesTable;
    QWidget *emprestimoPG;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QComboBox *tipoDeBuscaEmprestimoCB;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QCheckBox *definirDataEmprestimoCheck;
    QDateEdit *dataEmprestimo;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *pesquisaEmprestimoLE;
    QPushButton *buscarEmprestimosBTN;
    QTableView *emprestimoBTN;
    QMenuBar *menuBar;
    QMenu *menuCadastro;
    QMenu *menuUsuario;
    QMenu *menuEmprestimo;
    QMenu *menuDevolucao;
    QMenu *menuSobre;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(514, 389);
        actionFuncionario = new QAction(MainWindow);
        actionFuncionario->setObjectName(QStringLiteral("actionFuncionario"));
        actionPublicacao = new QAction(MainWindow);
        actionPublicacao->setObjectName(QStringLiteral("actionPublicacao"));
        actionAlunoCad = new QAction(MainWindow);
        actionAlunoCad->setObjectName(QStringLiteral("actionAlunoCad"));
        actionProfessorCad = new QAction(MainWindow);
        actionProfessorCad->setObjectName(QStringLiteral("actionProfessorCad"));
        actionAlunoEmp = new QAction(MainWindow);
        actionAlunoEmp->setObjectName(QStringLiteral("actionAlunoEmp"));
        actionProfessorEmp = new QAction(MainWindow);
        actionProfessorEmp->setObjectName(QStringLiteral("actionProfessorEmp"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        usuariosCadastradosBTN = new QPushButton(centralWidget);
        usuariosCadastradosBTN->setObjectName(QStringLiteral("usuariosCadastradosBTN"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(usuariosCadastradosBTN->sizePolicy().hasHeightForWidth());
        usuariosCadastradosBTN->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(usuariosCadastradosBTN);

        publicacoesBTN = new QPushButton(centralWidget);
        publicacoesBTN->setObjectName(QStringLiteral("publicacoesBTN"));
        sizePolicy.setHeightForWidth(publicacoesBTN->sizePolicy().hasHeightForWidth());
        publicacoesBTN->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(publicacoesBTN);

        emprestimosBTN = new QPushButton(centralWidget);
        emprestimosBTN->setObjectName(QStringLiteral("emprestimosBTN"));
        sizePolicy.setHeightForWidth(emprestimosBTN->sizePolicy().hasHeightForWidth());
        emprestimosBTN->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(emprestimosBTN);


        horizontalLayout->addLayout(verticalLayout);

        paginas = new QStackedWidget(centralWidget);
        paginas->setObjectName(QStringLiteral("paginas"));
        paginas->setEnabled(true);
        inicialPG = new QWidget();
        inicialPG->setObjectName(QStringLiteral("inicialPG"));
        paginas->addWidget(inicialPG);
        usuariosPG = new QWidget();
        usuariosPG->setObjectName(QStringLiteral("usuariosPG"));
        verticalLayout_3 = new QVBoxLayout(usuariosPG);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(usuariosPG);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buscarPorLB = new QLabel(usuariosPG);
        buscarPorLB->setObjectName(QStringLiteral("buscarPorLB"));

        horizontalLayout_2->addWidget(buscarPorLB);

        tipoDeBuscaUsuarioCB = new QComboBox(usuariosPG);
        tipoDeBuscaUsuarioCB->setObjectName(QStringLiteral("tipoDeBuscaUsuarioCB"));

        horizontalLayout_2->addWidget(tipoDeBuscaUsuarioCB);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pesquisaUsuarioLE = new QLineEdit(usuariosPG);
        pesquisaUsuarioLE->setObjectName(QStringLiteral("pesquisaUsuarioLE"));

        horizontalLayout_3->addWidget(pesquisaUsuarioLE);

        buscarBTN = new QPushButton(usuariosPG);
        buscarBTN->setObjectName(QStringLiteral("buscarBTN"));

        horizontalLayout_3->addWidget(buscarBTN);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        usuarioTable = new QTableView(usuariosPG);
        usuarioTable->setObjectName(QStringLiteral("usuarioTable"));

        verticalLayout_3->addWidget(usuarioTable);

        paginas->addWidget(usuariosPG);
        publicacoesPG = new QWidget();
        publicacoesPG->setObjectName(QStringLiteral("publicacoesPG"));
        verticalLayout_4 = new QVBoxLayout(publicacoesPG);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(publicacoesPG);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(publicacoesPG);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        tipoDeBuscaPublicacaoCB = new QComboBox(publicacoesPG);
        tipoDeBuscaPublicacaoCB->setObjectName(QStringLiteral("tipoDeBuscaPublicacaoCB"));

        horizontalLayout_5->addWidget(tipoDeBuscaPublicacaoCB);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        publicacaoLivroCheck = new QCheckBox(publicacoesPG);
        publicacaoLivroCheck->setObjectName(QStringLiteral("publicacaoLivroCheck"));

        horizontalLayout_4->addWidget(publicacaoLivroCheck);

        publicacaoRevistaCheck = new QCheckBox(publicacoesPG);
        publicacaoRevistaCheck->setObjectName(QStringLiteral("publicacaoRevistaCheck"));

        horizontalLayout_4->addWidget(publicacaoRevistaCheck);

        publicacaoPeriodicosCheck = new QCheckBox(publicacoesPG);
        publicacaoPeriodicosCheck->setObjectName(QStringLiteral("publicacaoPeriodicosCheck"));

        horizontalLayout_4->addWidget(publicacaoPeriodicosCheck);

        publicacaoArtigoCheck = new QCheckBox(publicacoesPG);
        publicacaoArtigoCheck->setObjectName(QStringLiteral("publicacaoArtigoCheck"));

        horizontalLayout_4->addWidget(publicacaoArtigoCheck);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pesquisaPublicacaoLE = new QLineEdit(publicacoesPG);
        pesquisaPublicacaoLE->setObjectName(QStringLiteral("pesquisaPublicacaoLE"));

        horizontalLayout_6->addWidget(pesquisaPublicacaoLE);

        buscarPublicacoesBTN = new QPushButton(publicacoesPG);
        buscarPublicacoesBTN->setObjectName(QStringLiteral("buscarPublicacoesBTN"));

        horizontalLayout_6->addWidget(buscarPublicacoesBTN);


        verticalLayout_4->addLayout(horizontalLayout_6);

        publicacoesTable = new QTableView(publicacoesPG);
        publicacoesTable->setObjectName(QStringLiteral("publicacoesTable"));

        verticalLayout_4->addWidget(publicacoesTable);

        paginas->addWidget(publicacoesPG);
        emprestimoPG = new QWidget();
        emprestimoPG->setObjectName(QStringLiteral("emprestimoPG"));
        verticalLayout_5 = new QVBoxLayout(emprestimoPG);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(emprestimoPG);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(emprestimoPG);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        tipoDeBuscaEmprestimoCB = new QComboBox(emprestimoPG);
        tipoDeBuscaEmprestimoCB->setObjectName(QStringLiteral("tipoDeBuscaEmprestimoCB"));

        horizontalLayout_8->addWidget(tipoDeBuscaEmprestimoCB);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(emprestimoPG);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        definirDataEmprestimoCheck = new QCheckBox(emprestimoPG);
        definirDataEmprestimoCheck->setObjectName(QStringLiteral("definirDataEmprestimoCheck"));

        horizontalLayout_7->addWidget(definirDataEmprestimoCheck);

        dataEmprestimo = new QDateEdit(emprestimoPG);
        dataEmprestimo->setObjectName(QStringLiteral("dataEmprestimo"));
        dataEmprestimo->setCalendarPopup(true);
        dataEmprestimo->setDate(QDate(2000, 1, 6));

        horizontalLayout_7->addWidget(dataEmprestimo);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pesquisaEmprestimoLE = new QLineEdit(emprestimoPG);
        pesquisaEmprestimoLE->setObjectName(QStringLiteral("pesquisaEmprestimoLE"));

        horizontalLayout_9->addWidget(pesquisaEmprestimoLE);

        buscarEmprestimosBTN = new QPushButton(emprestimoPG);
        buscarEmprestimosBTN->setObjectName(QStringLiteral("buscarEmprestimosBTN"));

        horizontalLayout_9->addWidget(buscarEmprestimosBTN);


        verticalLayout_5->addLayout(horizontalLayout_9);

        emprestimoBTN = new QTableView(emprestimoPG);
        emprestimoBTN->setObjectName(QStringLiteral("emprestimoBTN"));

        verticalLayout_5->addWidget(emprestimoBTN);

        paginas->addWidget(emprestimoPG);

        horizontalLayout->addWidget(paginas);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 514, 21));
        menuCadastro = new QMenu(menuBar);
        menuCadastro->setObjectName(QStringLiteral("menuCadastro"));
        menuUsuario = new QMenu(menuCadastro);
        menuUsuario->setObjectName(QStringLiteral("menuUsuario"));
        menuEmprestimo = new QMenu(menuBar);
        menuEmprestimo->setObjectName(QStringLiteral("menuEmprestimo"));
        menuDevolucao = new QMenu(menuBar);
        menuDevolucao->setObjectName(QStringLiteral("menuDevolucao"));
        menuSobre = new QMenu(menuBar);
        menuSobre->setObjectName(QStringLiteral("menuSobre"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCadastro->menuAction());
        menuBar->addAction(menuEmprestimo->menuAction());
        menuBar->addAction(menuDevolucao->menuAction());
        menuBar->addAction(menuSobre->menuAction());
        menuCadastro->addAction(menuUsuario->menuAction());
        menuCadastro->addAction(actionFuncionario);
        menuCadastro->addAction(actionPublicacao);
        menuUsuario->addAction(actionAlunoCad);
        menuUsuario->addAction(actionProfessorCad);
        menuEmprestimo->addAction(actionAlunoEmp);
        menuEmprestimo->addAction(actionProfessorEmp);

        retranslateUi(MainWindow);

        paginas->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Biblioteca", 0));
        actionFuncionario->setText(QApplication::translate("MainWindow", "Funcion\303\241rio", 0));
        actionPublicacao->setText(QApplication::translate("MainWindow", "Publica\303\247\303\243o", 0));
        actionAlunoCad->setText(QApplication::translate("MainWindow", "Aluno", 0));
        actionProfessorCad->setText(QApplication::translate("MainWindow", "Professor", 0));
        actionAlunoEmp->setText(QApplication::translate("MainWindow", "Aluno", 0));
        actionProfessorEmp->setText(QApplication::translate("MainWindow", "Professor", 0));
        usuariosCadastradosBTN->setText(QString());
        publicacoesBTN->setText(QString());
        emprestimosBTN->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Pagina de Usu\303\241rios", 0));
        buscarPorLB->setText(QApplication::translate("MainWindow", "Buscar por", 0));
        tipoDeBuscaUsuarioCB->clear();
        tipoDeBuscaUsuarioCB->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Matricicula", 0)
         << QApplication::translate("MainWindow", "Nome", 0)
         << QApplication::translate("MainWindow", "E-mail", 0)
        );
        buscarBTN->setText(QApplication::translate("MainWindow", "Buscar", 0));
        label_2->setText(QApplication::translate("MainWindow", "Pagina de publia\303\247\303\265es", 0));
        label_5->setText(QApplication::translate("MainWindow", "Bucar por", 0));
        tipoDeBuscaPublicacaoCB->clear();
        tipoDeBuscaPublicacaoCB->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "T\303\255tulo", 0)
         << QApplication::translate("MainWindow", "Editora", 0)
         << QApplication::translate("MainWindow", "G\303\252nero", 0)
        );
        publicacaoLivroCheck->setText(QApplication::translate("MainWindow", "Livro", 0));
        publicacaoRevistaCheck->setText(QApplication::translate("MainWindow", "Revista", 0));
        publicacaoPeriodicosCheck->setText(QApplication::translate("MainWindow", "Peri\303\263dicos", 0));
        publicacaoArtigoCheck->setText(QApplication::translate("MainWindow", "Artigo", 0));
        buscarPublicacoesBTN->setText(QApplication::translate("MainWindow", "Buscar", 0));
        label_3->setText(QApplication::translate("MainWindow", "Pagina Emprestimos", 0));
        label_4->setText(QApplication::translate("MainWindow", "Pesquisar por", 0));
        tipoDeBuscaEmprestimoCB->clear();
        tipoDeBuscaEmprestimoCB->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Nome do usu\303\241rio", 0)
         << QApplication::translate("MainWindow", "Id do exemplar", 0)
        );
        label_6->setText(QApplication::translate("MainWindow", "Definir data", 0));
        definirDataEmprestimoCheck->setText(QString());
        buscarEmprestimosBTN->setText(QApplication::translate("MainWindow", "Buscar", 0));
        menuCadastro->setTitle(QApplication::translate("MainWindow", "Cadastro", 0));
        menuUsuario->setTitle(QApplication::translate("MainWindow", "Usu\303\241rio", 0));
        menuEmprestimo->setTitle(QApplication::translate("MainWindow", "Emprestimo", 0));
        menuDevolucao->setTitle(QApplication::translate("MainWindow", "Devolu\303\247\303\243o", 0));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Sobre", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
