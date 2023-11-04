#ifndef ITERATOR_H
#define ITERATOR_H

class AbstractTable;

class Iterator {
public:
    virtual AbstractTable* first() = 0;
    virtual AbstractTable* next() = 0;
    virtual bool hasNext() = 0;
    virtual AbstractTable* current() = 0;
};

#endif
