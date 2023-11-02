#ifndef CUSTOMER_CPP
#define CUSTOMER_CPP
#include <iostream>
#include <string>
using namespace std;
#include "Customer.h"
#include<cstdlib>
#include "RandomString.h"
#include "Customer.h"

class Order;
string Customer::GiveComment_Food()
{
    srand((unsigned) time(NULL));
    int random=rand()%10;
    if(this->state->getStatus()=="ANGRY")
    {
        return RandomString::NegativeComment[random];
    }
    else if(this->state->getStatus()=="HAPPY")
    {
        return RandomString::PositiveComment[random];
    }
    else
    {
        return "";
    } 
}



string Customer::GiveComment_Service()
{
   
    srand((unsigned) time(NULL));
    int random=rand()%10;
    if(this->state->getStatus()=="ANGRY")
    {
        return RandomString::NegativeComment[random];
    }
    else if(this->state->getStatus()=="HAPPY")
    {
        return RandomString::PositiveComment[random];
    }
    else
    {
        return "";
    } 
    return "";
}



int Customer::GiveRating_Food()
{
    srand((unsigned) time(NULL));
    int random=rand()%5;

    if (this->state->getStatus() == "ANGRY")
    {
        return random;
    }
    else if(this->state->getStatus()=="HAPPY")
    {
        return random+6;
    }
    return 5;
}

int Customer::GiveRating_Service()
{
    srand((unsigned) time(NULL));
    int random=rand()%5;

    if (this->state->getStatus() == "ANGRY")
    {
        return random;
    }
    else if(this->state->getStatus()=="HAPPY")
    {
        return random+6;
    }
    return 5;
}



Customer::Customer()
{
    ID="";
    string alphabets="abcdefghijklmnopqrstuvwxyz";
    srand((unsigned) time(NULL));
    int random;
    for(int i=0; i<10; i++)
    {
        ID+=alphabets.substr(rand()%26, 1);
    }
    
}

/*void Customer::receiveOrder(Order* order)
{
    Food* food= order->getFood();
    if(food->getRandomFoodQuality()<=5)//bad
    {
        delete state;
        state= new Angry();
    }
    else{//good
        delete state;
        state= new Happy();
    }

}*/

#endif