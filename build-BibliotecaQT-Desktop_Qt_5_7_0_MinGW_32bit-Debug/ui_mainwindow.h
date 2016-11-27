/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
    QComboBox *tipoDeBuscaCB;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *pesquisaLE;
    QPushButton *pushButton;
    QTableView *tableView;
    QWidget *publicacoesPG;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QTableView *tableView_2;
    QWidget *emprestimoPG;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_5;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QTableView *tableView_3;
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

        tipoDeBuscaCB = new QComboBox(usuariosPG);
        tipoDeBuscaCB->setObjectName(QStringLiteral("tipoDeBuscaCB"));

        horizontalLayout_2->addWidget(tipoDeBuscaCB);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pesquisaLE = new QLineEdit(usuariosPG);
        pesquisaLE->setObjectName(QStringLiteral("pesquisaLE"));

        horizontalLayout_3->addWidget(pesquisaLE);

        pushButton = new QPushButton(usuariosPG);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        tableView = new QTableView(usuariosPG);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_3->addWidget(tableView);

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

        comboBox = new QComboBox(publicacoesPG);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_5->addWidget(comboBox);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        checkBox_3 = new QCheckBox(publicacoesPG);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_4->addWidget(checkBox_3);

        checkBox = new QCheckBox(publicacoesPG);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_4->addWidget(checkBox);

        checkBox_4 = new QCheckBox(publicacoesPG);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        horizontalLayout_4->addWidget(checkBox_4);

        checkBox_2 = new QCheckBox(publicacoesPG);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_4->addWidget(checkBox_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lineEdit = new QLineEdit(publicacoesPG);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_6->addWidget(lineEdit);

        pushButton_2 = new QPushButton(publicacoesPG);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_6->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_6);

        tableView_2 = new QTableView(publicacoesPG);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        verticalLayout_4->addWidget(tableView_2);

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

        comboBox_2 = new QComboBox(emprestimoPG);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_8->addWidget(comboBox_2);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(emprestimoPG);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        checkBox_5 = new QCheckBox(emprestimoPG);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        horizontalLayout_7->addWidget(checkBox_5);

        dateEdit = new QDateEdit(emprestimoPG);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2000, 1, 6));

        horizontalLayout_7->addWidget(dateEdit);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        lineEdit_2 = new QLineEdit(emprestimoPG);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_9->addWidget(lineEdit_2);

        pushButton_3 = new QPushButton(emprestimoPG);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_9->addWidget(pushButton_3);


        verticalLayout_5->addLayout(horizontalLayout_9);

        tableView_3 = new QTableView(emprestimoPG);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));

        verticalLayout_5->addWidget(tableView_3);

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
        tipoDeBuscaCB->clear();
        tipoDeBuscaCB->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Matricicula", 0)
         << QApplication::translate("MainWindow", "Nome", 0)
         << QApplication::translate("MainWindow", "E-mail", 0)
        );
        pushButton->setText(QApplication::translate("MainWindow", "Buscar", 0));
        label_2->setText(QApplication::translate("MainWindow", "Pagina de publia\303\247\303\265es", 0));
        label_5->setText(QApplication::translate("MainWindow", "Bucar por", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "T\303\255tulo", 0)
         << QApplication::translate("MainWindow", "Editora", 0)
         << QApplication::translate("MainWindow", "G\303\252nero", 0)
        );
        checkBox_3->setText(QApplication::translate("MainWindow", "Livro", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Revista", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "Peri\303\263dicos", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Artigo", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Buscar", 0));
        label_3->setText(QApplication::translate("MainWindow", "Pagina Emprestimos", 0));
        label_4->setText(QApplication::translate("MainWindow", "Pesquisar por", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Nome do usu\303\241rio", 0)
         << QApplication::translate("MainWindow", "Id do exemplar", 0)
        );
        label_6->setText(QApplication::translate("MainWindow", "Definir data", 0));
        checkBox_5->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Buscar", 0));
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
