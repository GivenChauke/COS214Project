#ifndef PROCESSING_H
#define PROCESSING_H

#include "OrderStatus.h"

class Processing: public OrderStatus{

    public:
        virtual std::string getStatus(){
            return "Processing";
        }

};

#endif