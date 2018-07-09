#ifndef MYAPPLICATION_H
#define MYAPPLICATION_H
#include "application.h"
#include "mydocument.h"
#include <QHash>

class MyApplication : public Application
{
public:
    MyApplication() {;}
    Document* createDocument(QString str){
        if (str.contains("MyDocument"))
            return new MyDocument();
        qDebug() << "Unrecognized document type.";
        return nullptr;
    }

private:
    void registerDocument(QString str, Document* doc){myApplicationHash.insert(str, doc);}
};
#endif // MYAPPLICATION_H
