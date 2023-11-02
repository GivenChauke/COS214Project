#ifndef HAPPY_H
#define HAPPY_H
#include "CustomerState.h"
#include <iostream>
using namespace std;

class Happy: public CustomerState
{
    public:
        string getString(){return "HAPPY";}
        void action(){cout<<"Customer: THE FOOD HERE IS SO AMAZING";};

};
#endif