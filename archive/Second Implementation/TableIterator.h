#ifndef TABLEITERATOR_H
#define TABLEITERATOR_H

#include "Iterator.h"
#include <vector>

class Table;

class TableIterator : public Iterator {
public:
    TableIterator(const std::vector<Table*>& tables);
    ~TableIterator();
    Table* first() override;
    Table* next() override;
    bool hasNext() override;
    Table* current() override;
private:
    std::vector<Table*> tables;
    int currentPos;
};

#endif // TABLEITERATOR_H
