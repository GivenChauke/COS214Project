#ifndef PAYBILL_H
#define PAYBILL_H
#include <string>
#include <iostream>
using namespace std;

class PayBill
{
    public:
        string getStatus(){return "PAYBILL";};
        void action(){cout<<"TABLE: CAN WE GET THE BILL";};
};

#endif