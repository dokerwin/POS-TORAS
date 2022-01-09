#include "sqlhelper.h"
#include<QDebug>

SqlHelper::SqlHelper(QObject *parent)
    : QObject(parent)
{
    qDebug()<<"SqlHelper created";
}

SqlHelper::~SqlHelper()
{
      qDebug()<<"SqlHelper destroyed";
}

bool SqlHelper::CreateDbConnection(QString str)
{

    Database = QSqlDatabase::addDatabase("QSQLITE");
    Database.setDatabaseName("TORAS_DB.db");

    if (!Database.open())
    {
        return false;
    }
    return true;
}

void SqlHelper::CloseDbConnection()
{
    if (Database.isOpen())
    {
        Database.close();
    }
}

ITable *SqlHelper::TablePtr()
{
    return  table;
}

