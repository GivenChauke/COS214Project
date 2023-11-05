#ifndef COMBINEDTABLE_CPP
#define COMBINEDTABLE_CPP
#include "CombinedTable.h"
#include <iostream>
using namespace std;

CombinedTable::CombinedTable()
{
    //table;
}
CombinedTable::~CombinedTable()
{
    
}

bool CombinedTable::addTable(AbstractTable* table)
{
    /*if(this->table != NULL && table != NULL)
    {
        this->table=table;
        return true;
    }*/
    this->table.push_back(table);
    return true;
}

AbstractTable* CombinedTable::separateTable()
{
    if(this->table.size()==0)
    {
        return NULL;
    }
    return this->table.at(0);
    
}


vector<Order*> CombinedTable::placeOrder()
{
    vector<Order*> rt;
}


#endif