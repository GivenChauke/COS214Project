#ifndef COMBINEDTABLE_H
#define COMBINEDTABLE_H
#include "AbstractTable.h"

class CombinedTable : public AbstractTable
{
    private:
        /* data */
        vector<AbstractTable*> table;
    public:
        CombinedTable(/* args */);
        ~CombinedTable();
        bool AddTable(AbstractTable* table);
        AbstractTable* SeparateTable();
        vector<Order*> PlaceOrder();
};


#endif