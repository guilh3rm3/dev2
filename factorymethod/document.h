#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document
{
public:
    Document() {;}
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void save() = 0;
    virtual void revert() = 0;
};
#endif // DOCUMENT_H
