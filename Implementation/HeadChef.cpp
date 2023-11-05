#include "HeadChef.h"

HeadChef::HeadChef(Chef* nc, string type):Chef(nc,type)
{
    this->builder = new DishBuilder();
}
Order* HeadChef::cook(Order* order)
{

    cout<<"HeadChef is finalizing your order please wait a moment..."<<endl;
    for(int i = 0;i < order->getItems().size();i++)
    {
        if(order->getItems().at(i)== nullptr ) break;
        if(order->getItems().at(i)!=nullptr && order->getItems().at(i)->method.compare("fryer")!=0 && order->getItems().at(i)->method.compare("grill")!=0  ){
        string name = order->getItems().at(i)->name;
        order->getFood().front()->addIngredient(name);
        cout<<"Adding extra "<<name<<" to the meal"<<endl;
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