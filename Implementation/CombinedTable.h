#ifndef COMBINEDTABLE_H
#define COMBINEDTABLE_H
#include "AbstractTable.h"
#include <vector>
#include "Order.h"
class CombinedTable : public AbstractTable
{
    private:
        /* data */
        vector<AbstractTable*> table;
    public:
        CombinedTable();
        ~CombinedTable();
        bool AddTable(AbstractTable* table);
        AbstractTable* SeparateTable();
        vector<Order*> PlaceOrder();
};
//#include "CombinedTable.cpp"

#endif