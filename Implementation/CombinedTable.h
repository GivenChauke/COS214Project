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
    /**
     * @brief Construct a new Combined Table object
     * 
     */
        CombinedTable();
        /**
         * @brief Destroy the Combined Table object
         * 
         */
        ~CombinedTable();
        /**
         * @brief 
         * 
         * @param table 
         * @return true 
         * @return false 
         */
        bool AddTable(AbstractTable* table);
        /**
         * @brief 
         * 
         * @return AbstractTable* 
         */
        AbstractTable* SeparateTable();
        /*
        
        */
        vector<Order*> PlaceOrder();
};
//#include "CombinedTable.cpp"

#endif