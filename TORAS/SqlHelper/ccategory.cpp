#include "ccategory.h"

CCategory::CCategory()
{

}

bool CCategory::AddCategory(category NewCategory)
{
    QString values = NewCategory._CategoryName + ","
            + NewCategory._CategoryNo + ","
            + NewCategory._Description;
    return Insert(values);
}

QString CCategory::Select(QString values)
{
    return QString();
}

bool CCategory::Insert(QString values)
{
    QSqlQuery query;
    query.prepare("INSERT INTO category(CategoryName, Description, CategoryNo)"
                  "VALUES (" +values+ ")");
    return query.exec();

}

bool CCategory::Delete(QString)
{
    return false;
}

bool CCategory::Update(QString)
{
    return false;
}
