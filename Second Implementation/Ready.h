#ifndef READY_H
#define READY_H

#include "OrderStatus.h"
using namespace std;

class Ready: public OrderStatus{
    public:
        virtual string getStatus(){
            return "Ready";
        }

};

#endif