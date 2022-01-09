#ifndef CATEGORY_H
#define CATEGORY_H
#include<QString>

class category
{  
public:
     category() =  default;
    ~category() =  default;
    size_t  _CategoryID = 0;
    QString _CategoryNo;
    QString _CategoryName;
    QString _Description;
};

#endif // CATEGORY_H
