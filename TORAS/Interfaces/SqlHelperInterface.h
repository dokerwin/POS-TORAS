#ifndef ISQLHELPER_H
#define ISQLHELPER_H

#include <QObject>

class ISqlHelper 
{
public:

        virtual ~ISqlHelper() = default;
       
        virtual bool CreateDbConnection(QString str) = 0;

};
#define SqlHelperInterface_iid "nik.name.doker.ISqlInterface"
Q_DECLARE_INTERFACE(ISqlHelper,SqlHelperInterface_iid)

#endif // ISQLHELPER_H
