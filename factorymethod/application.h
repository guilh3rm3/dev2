#ifndef APPLICATION_H
#define APPLICATION_H
#include "document.h"
#include "QString"
#include <QHash>

class Application
{
public:
    Application() {;}
    virtual Document* createDocument(QString str) = 0;
    virtual Document* newDocument(QString str){
        Document* newdoc = createDocument(str);
        myApplicationHash.insert(str, newdoc);
        openDocument(newdoc);
        return newdoc;
    }
    virtual void openDocument(Document* doc){
        qDebug() << "OpenDocument!";
        doc->open();
    }
protected:
    QHash<QString, Document*> myApplicationHash;
};
#endif // APPLICATION_H
