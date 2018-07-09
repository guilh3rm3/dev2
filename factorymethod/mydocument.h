#ifndef MYDOCUMENT_H
#define MYDOCUMENT_H
#include "document.h"
#include <QDebug>

class MyDocument : public Document
{
public:
    MyDocument() {;}

    void open() {qDebug() << "Open!";}
    void close() {qDebug() << "Close!";}
    void save() {qDebug() << "Save!";}
    void revert() {qDebug() << "Revert!";}
};
#endif // MYDOCUMENT_H
