#include "Chef.h"

Chef::Chef(Chef *nc,string type)
{
    this->type = type;
    nextChef = nc;
    //AbstractDishBuilder* builder = new AbstractDishBuilder();
}

void Chef::addChef(Chef * nc)
{
    nextChef = nc;
}
Chef::~Chef()
{
    if(!nextChef)
    nextChef = nullptr;
}
Order* Chef::cook(Order* order)
{
    if(processOrder(order))
    {
        //cook using builder and decorator
    }
    //pass the order to the next chef
    return nextChef->cook(order);
}
bool Chef::processOrder(Order* order)
{
   for(int i=0;i < order->getItems().size();i++)
   {
    if (order->getItems().at(i)->type == type)
    return true;
   }
   return false;
}