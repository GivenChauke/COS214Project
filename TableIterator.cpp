
#include "TableIterator.h"
#include "AbstractTable.h"
#include <vector>

TableIterator::TableIterator(const std::vector<AbstractTable*>& tables) : tables(tables), currentPos(0) {}

AbstractTable* TableIterator::first() {
    if (!tables.empty()) {
        currentPos = 0;
        return tables[0];
    }
    return nullptr;
}

AbstractTable* TableIterator::next() {
    if (hasNext()) {
        currentPos++;
        return tables[currentPos];
    }
    return nullptr;
}

bool TableIterator::hasNext() {
    return currentPos + 1 < tables.size();
}

AbstractTable* TableIterator::current() {
    if (currentPos < tables.size()) {
        return tables[currentPos];
    }
    return nullptr;
}
