#ifndef ORDER_STATUS_H
#define ORDER_STATUS_H

#include <string>

class OrderStatus{
    public:
        virtual std::string getStatus() = 0;


};

#endif