#ifndef COMBINEDTABLE_CPP
#define COMBINEDTABLE_CPP
#include "CombinedTable.h"
#include "AbstractTable.h"
#include <iostream>
#include "Order.h"
using namespace std;


CombinedTable::~CombinedTable()
{
    
}

bool CombinedTable::AddTable(AbstractTable* table)
{
    /*if(this->table != NULL && table != NULL)
    {
        this->table=table;
        return true;
    }*/
    this->table.push_back(table);
    return true;
}

AbstractTable* CombinedTable::SeparateTable()
{
    if(this->table.size()==0)
    {
        return NULL;
    }
    return this->table.at(0);
    
}


vector<Order*> CombinedTable::PlaceOrder()
{
   
    vector<Order*> orders;
    vector<Order*> temp;
    vector<Order*>::iterator it;
    for(int i=0; i<table.size(); i++)
    {
        temp=table.at(i)->getCustomerGroup().PlaceOrder();
    //    it=orders.begin();
        //(orders.begin() ,temp.begin(), temp.back() );
        orders.insert(orders.begin(),temp.begin(),temp.end());
    }

    for(int i=0;i<orders.size(); i++)
    {
        orders.at(i)->setTable(this);
    }

    return orders;
}


#endif