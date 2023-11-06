#ifndef RECEIVED_H
#define RECEIVED_H

#include <string>
#include "OrderStatus.h"
using namespace std;

class Received: public OrderStatus{
    public:
    /**
     * @brief Get the Status object
     * 
     * @return std::string 
     */
        virtual std::string getStatus(){
            return "Received";
        }

};

#endif