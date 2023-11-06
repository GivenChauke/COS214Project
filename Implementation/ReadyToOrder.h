#ifndef READYTOORDER_H
#define READYTOORDER_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"
class ReadyToOrder : public TableState
{
    public:
    /**
     * @brief Get the Status object
     * 
     * @return string 
     */
        string getStatus(){return "READYTOORDER";};
        /**
         * @brief 
         * 
         */
        void action(){cout<<"TABLE: WE READY TO ORDER";};
};

#endif