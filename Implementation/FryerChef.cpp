#include "FryerChef.h"

FryerChef::FryerChef(Chef* nc,string type):Chef(nc,type)
{

}
Order* FryerChef::cook(Order* order)
{
    if(processOrder(order))
    {
        //fry whateva man lol, and put the dishes in the order class
    }
    //pass the order to the next chef
    return nextChef->cook(order);
}
FryerChef::~FryerChef()
{
    if(!nextChef)
    {
        nextChef = nullptr;
    }
}