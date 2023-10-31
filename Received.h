#ifndef RECEIVED_H
#define RECEIVED_H

#include <string>
#include "OrderStatus.h"

class Received: public OrderStatus{
    public:
        virtual std::string getStatus(){
            return "Received";
        }

};

#endif