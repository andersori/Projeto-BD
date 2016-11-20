#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>

namespace Ui {
class LoginDLG;
}

class LoginDLG : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDLG(QWidget *parent = 0);
    ~LoginDLG();

    bool getLogado() const;


private:
    Ui::LoginDLG *ui;
    bool logado;

    void setLogado(bool value);

private slots:
    void login();
};

#endif // LOGINDLG_H
