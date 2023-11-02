#ifndef TABLE_STATE
#define TABLE_STATE
#include <string>
#include <iostream>
using namespace std;




class TableState
{
    public:
        virtual string getStatus()=0;
        virtual void action(){}
};
#endif