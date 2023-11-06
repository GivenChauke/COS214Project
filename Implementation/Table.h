#ifndef TABLE_H
#define TABLE_H
#include <iostream>
using namespace std;
#include "AbstractTable.h"

class Table : public AbstractTable
{
    private:
        /* data */
    public:
    /**
     * @brief Construct a new Table object
     * 
     */
        Table(){};
        /**
         * @brief Destroy the Table object
         * 
         */
        ~Table(){};
        /**
         * @brief 
         * 
         * @param table 
         * @return true 
         * @return false 
         */
        bool AddTable(AbstractTable* table){return false;}
        /**
         * @brief 
         * 
         * @return AbstractTable* 
         */
        AbstractTable* SeparateTable(){return NULL;}


};



#endif