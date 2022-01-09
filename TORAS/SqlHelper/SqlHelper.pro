QT += sql

TEMPLATE = lib
CONFIG += plugin

CONFIG += c++17


DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


CONFIG(debug,debug|release){ BUILDTYPE = debug }
else { BUILDTYPE = release }


DESTDIR = ../BIN/$${BUILDTYPE}/sqlhelper

INCLUDEPATH += ../Interfaces
INCLUDEPATH += ../DbModel
INCLUDEPATH += C:/Program Files/MySQL/MySQL Connector C 6.1/include
SOURCES += \
    ../DbModel/category.cpp \
    DbModel/category.cpp \
    ccategory.cpp \
    ccompany.cpp \
    sqlhelper.cpp

HEADERS += \
    ../DbModel/category.h \
    ../DbModel/company.h \
    DbModel/category.h \
    DbTables.h \
    Util.h \
    ccategory.h \
    ccompany.h \
    sqlhelper.h


DISTFILES += SqlHelper.json \
    ../../DB/TORAS_DB.db

# Default rules for deployment.
unix {
    target.path = $$[QT_INSTALL_PLUGINS]/sqldrivers
}
!isEmpty(target.path): INSTALLS += target
