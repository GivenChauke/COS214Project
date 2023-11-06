#ifndef WAITING_H
#define WAITING_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"

class Waiting : public TableState
{
    public:
    /**
     * @brief Get the Status object
     * 
     * @return string 
     */
        string getStatus(){return "WAITING";}
        /**
         * @brief 
         * 
         */
        void action(){cout<<"TABLE: HOW LONG TILL OUR ORDER IS DONE";}
};

#endif