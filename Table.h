#ifndef TABLE_H
#define TABLE_H

#include "AbstractTable.h"

class Table : public AbstractTable {
private:
    int tableNumber;

public:
    Table();

    void getTableNumber() override;
    bool AddTable(AbstractTable* table) override;
    AbstractTable* SeparateTable() override;

    static int tableCount;
};

#endif
