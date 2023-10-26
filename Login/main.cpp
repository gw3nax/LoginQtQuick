#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "logincontroller.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Authentification auth;
    DTO dto;
    LoginController loginController(auth, dto);

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("loginController", &loginController);
    const QUrl url(u"qrc:/Login/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);
    return app.exec();
}
