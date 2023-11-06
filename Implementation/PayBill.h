#ifndef PAYBILL_H
#define PAYBILL_H
#include <string>
#include <iostream>
using namespace std;

class PayBill
{
    public:
    /**
     * @brief Get the Status object
     * 
     * @return string 
     */
        string getStatus(){return "PAYBILL";};
        /**
         * @brief 
         * 
         */
        void action(){cout<<"TABLE: CAN WE GET THE BILL";};
};

#endif