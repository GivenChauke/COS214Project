#include "HeadChef.h"

HeadChef::HeadChef(Chef* nc, string type):Chef(nc,type)
{

}
Order* HeadChef::cook(Order* order)
{

    cout<<"HeadChef is finalizing your order please wait a moment..."<<endl;
    //do what a head chefs does probably decorating the meal with sauces and spices
    //also placing dishes that cannot be fried or grilled
    for(int i = 0;i < order->getItems().size();i++)
    {
        if(order->getItems().at(i)->method != "fryer"||order->getItems().at(i)->method != "grill" ){
        string name = order->getItems().at(i)->name;
        order->getFood().front()->addIngredient(name);
        }
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