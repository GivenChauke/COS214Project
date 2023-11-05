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

CombinedTable::CombinedTable()
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
    AbstractTable * rt=table.at(table.size()-1);
    table.pop_back();
    return rt;    
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

    vector<Order*> ThisTable=getCustomerGroup().PlaceOrder();

    for(int i=0; i<ThisTable.size(); i++)
    {
        orders.push_back(ThisTable.at(i));
    }

    for(int i=0;i<orders.size(); i++)
    {
        orders.at(i)->setTable(this);
    }

    return orders;
}


#endif