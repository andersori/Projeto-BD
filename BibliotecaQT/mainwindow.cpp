#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "cadastrousuariodlg.h"
#include "alunoemprestimodlg.h"
#include "professoremprestimodlg.h"
#include "ajudadlg.h"
#include "devolucaodlg.h"

#include <QDebug>
#include <QPixmap>
#include <QIcon>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->tableModelUsuario = new QSqlQueryModel(ui->usuarioTable);
    this->tableModelPublicacao = new QSqlQueryModel(ui->publicacoesTable);

    QPixmap search_user(":/resources/imgs/search_user.png");
    QIcon ico(search_user);
    ui->usuariosCadastradosBTN->setIcon(ico);
    ui->usuariosCadastradosBTN->setIconSize(search_user.rect().size());

    QPixmap find_document(":/resources/imgs/find_document.png");
    QIcon ico2(find_document);
    ui->publicacoesBTN->setIcon(ico2);
    ui->publicacoesBTN->setIconSize(find_document.rect().size());

    QPixmap loan_document(":/resources/imgs/loan_document.png");
    QIcon ico3(loan_document);
    ui->emprestimosBTN->setIcon(ico3);
    ui->emprestimosBTN->setIconSize(loan_document.rect().size());



    connect(ui->actionUsuario, SIGNAL(triggered(bool)), this, SLOT(janelaCadastrarUsuario()));//COMANDO PARA ABRIR OUTRA JANELA - TIPO REFERENCIAR OUTRA JANELA
    connect(ui->actionAlunoEmp,SIGNAL(triggered()),this,SLOT(janelaEmprestimoAluno()));
    connect(ui->actionProfessorEmp,SIGNAL(triggered()),this,SLOT(janelaEmprestimoProf()));
    connect(ui->menuAjuda, SIGNAL(aboutToShow()), this, SLOT(janelaAjuda()));
    connect(ui->menuDevolucao, SIGNAL(aboutToShow()), this, SLOT(janelaDevolucao());

    connect(ui->usuariosCadastradosBTN, SIGNAL(clicked()), this, SLOT(paginaUsuarios()));//usuariosCadastradosBTN É UM BOTAO QUANDO APERTADO VAI ABRIR A PAGINA paginaUsuarios
    connect(ui->emprestimosBTN, SIGNAL(clicked()), this, SLOT(paginaEmprestimos()));//SIGNAL É APOREÇÃO FEITA COM O SLOT QUE É APGINA
    connect(ui->publicacoesBTN, SIGNAL(clicked()), this, SLOT(paginaPublicacoes()));

    connect(ui->buscarUsuarioBTN, SIGNAL(clicked()), this, SLOT(buscarUsuarios()));
    connect(ui->buscarPublicacoesBTN, SIGNAL(clicked(bool)), this, SLOT(buscarPublicacoes()));

    connect(ui->tipoDeBuscaUsuarioCB, SIGNAL(currentTextChanged(QString)), this, SLOT(tipoDeBuscaUsuario()));
    connect(ui->tipoDeBuscaPublicacaoCB, SIGNAL(currentTextChanged(QString)), this, SLOT(tipoDeBuscaPublicacao()));

    tipoDeBuscaPublicacao();
    tipoDeBuscaUsuario();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete tableModelUsuario;
}

//Definir qual pagina dentro do main sera exibida
void MainWindow::paginaUsuarios()
{
    ui->paginas->setCurrentIndex(1);
}

void MainWindow::paginaPublicacoes()
{
    ui->paginas->setCurrentIndex(2);
}

void MainWindow::paginaEmprestimos()
{
    ui->paginas->setCurrentIndex(3);
}

//Exibição de outras janelas
void MainWindow::janelaCadastrarUsuario()
{
    CadastroUsuarioDLG *janela = new CadastroUsuarioDLG();
    janela->exec();
}
void MainWindow::janelaEmprestimoAluno()
{
    AlunoEmprestimoDLG* janela=new AlunoEmprestimoDLG();
    janela->exec();
}
void MainWindow::janelaEmprestimoProf()
{
    ProfessorEmprestimoDLG* janela=new ProfessorEmprestimoDLG();
    janela->exec();
}
void MainWindow::janelaAjuda()
{
    ajudaDlg* janela = new ajudaDlg();
    janela->exec();
}
void MainWindow::janelaDevolucao()
{
    devolucaoDlg* janela = new devolucao();
    janela->exec();
}



//Execução de instruções sql
void MainWindow::executarBuscaPorUsuario(QString consulta)
{

    // Configura os cabeçalhos da tabela
    QStringList headers;
    headers.append(tr("Id"));
    headers.append(tr("Nome"));
    headers.append(tr("E-mail"));
    headers.append(tr("Telefone"));
    headers.append(tr("Data de Nascimento"));
    headers.append(tr("Cidade"));
    headers.append(tr("UF"));
    headers.append(tr("Rua"));
    headers.append(tr("Bairro"));
    headers.append(tr("Numero da casa"));

    QSqlDatabase bd = ConnectionDB::get_bd();
    QSqlQuery* qry = new QSqlQuery(bd);

    qry->prepare(consulta);

    if(!qry->exec())
    {
        qDebug() << qry->lastQuery();
        qDebug() << qry->lastError();
    }
    else
    {
        //Relacionar a table para receber dados de uma pesquisa SQL
        this->tableModelUsuario->setQuery(*qry);

        for (int i = 0; i < headers.size(); ++i)
            this->tableModelUsuario->setHeaderData(i, Qt::Horizontal, headers.at(i));

        ui->usuarioTable->setModel(this->tableModelUsuario);
        ui->usuarioTable->resizeColumnsToContents();
    }

    delete qry;
}

void MainWindow::executarBuscaPorPublicacao(QString consulta)
{

    // Configura os cabeçalhos da tabela
    QStringList headers;
    headers.append(tr("Id"));
    headers.append(tr("Título"));
    headers.append(tr("Sub-Título"));
    headers.append(tr("Editora"));
    headers.append(tr("Midia"));
    headers.append(tr("Tipo"));
    headers.append(tr("Volume"));

    QSqlDatabase bd = ConnectionDB::get_bd();
    QSqlQuery* qry = new QSqlQuery(bd);

    qry->prepare(consulta);

    if(!qry->exec())
    {
        qDebug() << qry->lastQuery();
        qDebug() << qry->lastError();
    }
    else
    {
        //Relacionar a table para receber dados de uma pesquisa SQL
        this->tableModelPublicacao->setQuery(*qry);

        for (int i = 0; i < headers.size(); ++i)
            this->tableModelPublicacao->setHeaderData(i, Qt::Horizontal, headers.at(i));

        ui->publicacoesTable->setModel(this->tableModelPublicacao);
        ui->publicacoesTable->resizeColumnsToContents();
    }

    delete qry;
}


//Montando instrução sql
void MainWindow::buscarUsuarios()
{
    switch (ui->tipoDeBuscaUsuarioCB->currentIndex()) {
    case 0: //Todos
    {
        QString consulta = "SELECT * FROM usuario";

        executarBuscaPorUsuario(consulta);

        break;
    }
    case 1: //Nome
    {
        QString consulta = "SELECT * FROM usuario WHERE nome like '";
        consulta.append(ui->pesquisaUsuarioLE->text() + "%'");

        executarBuscaPorUsuario(consulta);

        break;

    }
    case 2: //E-mail
    {
        QString consulta = "SELECT * FROM usuario WHERE email like '";
        consulta.append(ui->pesquisaUsuarioLE->text() + "%'");

        executarBuscaPorUsuario(consulta);

        break;
    }
    default:
        break;
    }
}
void MainWindow::buscarPublicacoes()
{
    switch (ui->tipoDeBuscaPublicacaoCB->currentIndex()) {
    case 0: //Todos
    {
        QString consulta = "SELECT * FROM publicacao";

        executarBuscaPorPublicacao(consulta);

        break;
    }
    case 1: //Título
    {
        QString consulta = "SELECT * FROM publicacao WHERE titulo like '";
        consulta.append(ui->pesquisaPublicacaoLE->text() + "%'");

        executarBuscaPorPublicacao(consulta);

        break;

    }
    case 2: //Editora
    {
        QString consulta = "SELECT * FROM publicacao WHERE editora like '";
        consulta.append(ui->pesquisaUsuarioLE->text() + "%'");

        executarBuscaPorPublicacao(consulta);

        break;
    }
    case 3: //Gênero
    {
        QString consulta = "SELECT * FROM publicacao as P, genero as G WHERE G.nome like '";
        consulta.append(ui->pesquisaUsuarioLE->text() + "%'");
        consulta.append(" AND G.id_publicacao = P.id");

        executarBuscaPorPublicacao(consulta);

        break;
    }
    default:
        break;
    }
}
void MainWindow::buscarEmprestimos()
{
    //Sem implementação
}

//Tipos de buscas
void MainWindow::tipoDeBuscaUsuario()
{
    if(ui->tipoDeBuscaUsuarioCB->currentText() != "Todos"){
        ui->pesquisaUsuarioLE->setEnabled(true);
        ui->restricaoDeBuscaUsuarioLB->setText(ui->tipoDeBuscaUsuarioCB->currentText());
    }
    else{
        ui->pesquisaUsuarioLE->setEnabled(false);
        ui->restricaoDeBuscaUsuarioLB->setText(ui->tipoDeBuscaUsuarioCB->currentText());
    }

    ui->pesquisaUsuarioLE->setText("");
}

void MainWindow::tipoDeBuscaPublicacao()
{
    if(ui->tipoDeBuscaPublicacaoCB->currentText() != "Todas"){
        ui->pesquisaPublicacaoLE->setEnabled(true);
    }
    else{
        ui->pesquisaPublicacaoLE->setEnabled(false);
    }

    ui->pesquisaPublicacaoLE->setText("");
}

void MainWindow::tipoDeBuscaEmprestimo()
{
    if(ui->tipoDeBuscaEmprestimoCB->currentText() != "Todos"){
        ui->pesquisaEmprestimoLE->setEnabled(true);
    }
    else{
        ui->pesquisaEmprestimoLE->setEnabled(false);
    }

    ui->pesquisaEmprestimoLE->setText("");
}





