#ifndef CCATEGORY_H
#define CCATEGORY_H

#include "itable.h"
#include "category.h"

class CCategory: public ITable
{

private:
 //ITable interface
    category _category;
    QString Select(QString);
    bool Insert(QString);
    bool Delete(QString);
    bool Update(QString);

public:
    CCategory();

    bool AddCategory(category);
    bool DeleteCategory(int);
    bool DeleteCategory(category);
    bool UpdateCategory(category,category);
    bool UpdateCategory(int,category);
    category FindCategory(category);
    category FindCategory(int);
};

#endif // CCATEGORY_H
