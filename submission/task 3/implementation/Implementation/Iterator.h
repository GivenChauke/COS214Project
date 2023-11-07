#ifndef ITERATOR_H
#define ITERATOR_H

class Table;

class Iterator {
public:
    virtual Table* first() = 0;
    virtual Table* next() = 0;
    virtual bool hasNext() = 0;
    virtual Table* current() = 0;
};

#endif // ITERATOR_H
