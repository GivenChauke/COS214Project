#include "TableIterator.h"
#include "Table.h"

TableIterator::TableIterator(const std::vector<Table*>& tables) : tables(tables), currentPos(0) {}

Table* TableIterator::first() {
    if (!tables.empty()) {
        currentPos = 0;
        return tables[0];
    }
    return nullptr;
}

Table* TableIterator::next() {
    if (hasNext()) {
        currentPos++;
        return tables[currentPos];
    }
    return nullptr;
}

bool TableIterator::hasNext() {
    return currentPos + 1 < tables.size();
}

Table* TableIterator::current() {
    if (currentPos < tables.size()) {
        return tables[currentPos];
    }
    return nullptr;
}
