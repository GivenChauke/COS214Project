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
        Table();
        ~Table();
        bool AddTable(AbstractTable* table){return false;}
        AbstractTable* Separate(){return NULL;}
        virtual Table* SeparateTable();

};



#endif