#ifndef CHEF
#define CHEF
#include <string>
using namespace std;
#include "Order.cpp"
#include "AbstractDishBuilder.h"
class Chef{
    public:
    void addChef(Chef*);
    virtual Order* cook(Order*);//the handle method
    Chef(Chef*,string);//next chef and type of chef(grill,fryer and or head )
    virtual ~Chef();
    bool processOrder(Order*);
    protected:
    Chef* nextChef;
    AbstractDishBuilder* builder;
    string type;
};
#endif