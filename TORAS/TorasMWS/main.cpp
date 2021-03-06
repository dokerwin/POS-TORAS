#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QPluginLoader>
#include "SqlHelperInterface.h"
#include "DbTables.h"
#include <QDebug>










int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
 //qputenv("QT_DEBUG_PLUGINS", QByteArray("1"));

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);


    QPluginLoader loader;
    loader.setFileName(QCoreApplication::applicationDirPath()+ "/sqlhelper/SqlHelper.dll");
    ISqlHelper * conection  = qobject_cast<ISqlHelper*>(loader.instance());
    if(conection)
    {
        qDebug()<<conection->CreateDbConnection("dfd");
         conection->
    }
    else
    {
         qDebug()<<loader.errorString();
    }


    return app.exec();
}
