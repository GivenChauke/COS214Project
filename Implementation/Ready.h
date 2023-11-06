#ifndef READY_H
#define READY_H

#include "OrderStatus.h"
using namespace std;

class Ready: public OrderStatus{
    public:
    /**
     * @brief Get the Status object
     * 
     * @return string 
     */
        virtual string getStatus(){
            return "Ready";
        }

};

#endif