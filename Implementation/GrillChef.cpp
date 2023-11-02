#include "GrillChef.h"
GrillChef::GrillChef(Chef* nc,string type):Chef(nc,type)
{

}
Order* GrillChef::cook(Order* order)
{
    if(processOrder(order))
    {
        //fry whatev needs to be fried and place the dish in the order
    }
    //pass the order to the next chef
    return nextChef->cook(order);
}
GrillChef::~GrillChef()
{
    if(!nextChef)
    nextChef = nullptr;
}