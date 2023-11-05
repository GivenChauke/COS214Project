#ifndef PROCESSING_H
#define PROCESSING_H

#include "OrderStatus.h"
using namespace std;

class Processing: public OrderStatus{

    public:
    /**
     * @brief Get the Status object
     * 
     * @return string 
     */
        virtual string getStatus(){
            return "Processing";
        }

};

#endif