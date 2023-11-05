#ifndef ANGRY_H
#define ANGRY_H
#include "CustomerState.h"
#include <iostream>
using namespace std;

class Angry: public CustomerState
{
    public:
    /**
     * @brief Get the Status object
     * 
     * @return string 
     */
        string getStatus(){return "ANGRY";};
        /**
         * @brief 
         * 
         */
        void action(){cout<<"Customer: THE FOOD HERE SUCKS";};

};
#endif