#ifndef CUSTOMER_STATE
#define CUSTOMER_STATE
#include <iostream>
#include <string>
using namespace std;


class CustomerState
{

    public:
    virtual string getStatus()=0;
    virtual void action()=0; 

};

#endif

