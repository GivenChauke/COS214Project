#ifndef TABLEITERATOR_H
#define TABLEITERATOR_H

#include "Iterator.h"
#include <vector>

class TableIterator : public Iterator {
public:
    TableIterator(const std::vector<AbstractTable*>& tables);

    AbstractTable* first() override;
    AbstractTable* next() override;
    bool hasNext() override;
    AbstractTable* current() override;
private:
    std::vector<AbstractTable*> tables;
    int currentPos;
};

#endif
