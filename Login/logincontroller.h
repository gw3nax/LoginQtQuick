#ifndef LOGINCONTROLLER_H
#define LOGINCONTROLLER_H

#include <QObject>
#include <QDebug>
#include "Authentification.h"
#include"AuthData.h"
#include "dto.h"

class LoginController: public QObject, public Authentification
{
    Q_OBJECT
public:
    LoginController(Authentification& authService, DTO& dto);


public slots:
    Q_INVOKABLE void login(const QString& login, const QString& password);

signals:
    void loginResult(bool success);
private:
    Authentification& authService;
    DTO& dto;
};

#endif // LOGINCONTROLLER_H
