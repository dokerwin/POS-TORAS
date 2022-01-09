#ifndef SQLHELPER_H
#define SQLHELPER_H

#include <QObject>
#include "SqlHelperInterface.h"
#include<QSqlDatabase>
#include"itable.h"

class SqlHelper : public QObject, public ISqlHelper
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID SqlHelperInterface_iid FILE "SqlHelper.json")
    Q_INTERFACES(ISqlHelper)

public:
    explicit SqlHelper(QObject *parent = nullptr);
    ~SqlHelper();

private:
    QSqlDatabase Database;
    ITable *table;

    // ISqlHelper interface
public:
    bool     CreateDbConnection(QString str);
    void     CloseDbConnection();
    ITable * TablePtr();
    void     SetTablePtr( ITable * TablePtr){ this->table = TablePtr; }
};

#endif // SQLHELPER_H
