#ifndef NEUTRAL_H
#define NEUTRAL_H
#include "CustomerState.h"
#include <iostream>
using namespace std;

class Neutral: public CustomerState
{
    public:
        string getStatus(){return "NEUTRAL";};
        void action(){cout<<"Customer:  Am so hungry";};

};
#endif