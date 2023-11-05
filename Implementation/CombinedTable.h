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
        bool addTable(AbstractTable* table);
        AbstractTable* separateTable();
        vector<Order*> placeOrder();
};


#endif