#ifndef READY_H
#define READY_H

#include "OrderStatus.h"

class Ready: public OrderStatus{
    public:
        virtual std::string getStatus(){
            return "Ready";
        }

};

#endif