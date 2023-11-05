#ifndef BILLMEMENTO_H
#define BILLMEMENTO_H

#include <string>
#include "BillState.h"
using namespace std;

class BillMemento 
{
    private:
        BillState* state;
    
    public:
    /**
     * @brief Construct a new Bill Memento object
     * 
     */
        BillMemento(){state=NULL;}
        /**
         * @brief Get the State object
         * 
         * @return BillState* 
         */
        BillState* getState();
        /**
         * @brief Set the State object
         * 
         * @param bs 
         */
        void setState(BillState* bs);

};
//#include "BillMemento.cpp"
#endif