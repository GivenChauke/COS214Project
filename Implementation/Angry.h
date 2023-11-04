#ifndef ANGRY_H
#define ANGRY_H
#include "CustomerState.h"
#include <iostream>
using namespace std;

class Angry: public CustomerState
{
    public:
        string getStatus(){return "ANGRY";};
        void action(){cout<<"Customer: THE FOOD HERE SUCKS";};

};
#endif