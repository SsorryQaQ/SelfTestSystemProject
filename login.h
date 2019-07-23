#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QIntValidator>
#include "userinfo.h"
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

public slots:
//  Recieve loginPushButton signal and exec.
    void loginSystemSlot();
    void setLoginPushButtonStatus();
private:
    Ui::Login *ui;
	UserInfo* allUser = nullptr;
    void setUserLineEdit();
};

#endif // LOGIN_H
