#include "HeadChef.h"

HeadChef::HeadChef(Chef* nc, string type):Chef(nc,type)
{

}
Order* HeadChef::cook(Order* order)
{
    if(processOrder(order))
    {
        //do what a head chefs does probably decorating the meal with sauces and spices
        //also placing dishes that cannot be fried or grilled
    }
    //return order end of chain
    return order;
}
HeadChef::~HeadChef()
{
    if(!this->nextChef)
    {
        nextChef = nullptr;
    }
}