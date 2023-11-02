#ifndef COMBINEDTABLE_CPP
#define COMBINEDTABLE_CPP
#include "CombinedTable.h"
#include <iostream>
using namespace std;

CombinedTable::CombinedTable()
{
    table=NULL;
}
CombinedTable::~CombinedTable()
{
    
}

bool CombinedTable::AddTable(AbstractTable* table)
{
    if(this->table != NULL && table != NULL)
    {
        this->table=table;
        return true;
    }
    return false;
}

AbstractTable* CombinedTable::SeparateTable()
{
    AbstractTable * RT=table;
    table=NULL;
    return RT;
    
}


vector<Order> CombinedTable::PlaceOrder()
{
    vector<Order> rt;
}


#endif