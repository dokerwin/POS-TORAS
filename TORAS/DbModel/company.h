#ifndef CATEGORY_H
#define CATEGORY_H
#include<QString>

class company
{  
public:
     company() =  default;
    ~company() =  default;
    size_t  _CompanyID = 0;
    QString _Name;
    QString _Adress;
    QString _PhoneNo;

};

#endif // CATEGORY_H
