#include "FryerChef.h"

FryerChef::FryerChef(Chef* nc,string type):Chef(nc,type)
{

}
Order* FryerChef::cook(Order* order)
{
    if(processOrder(order))
    {
        cout<<"FryChef is frying your order please wait a moment..."<<endl;
        for(int i = 0;i < order->getItems().size();i++)
        {
            if(order->getItems().at(i)->method == type && order->getItems().at(i)->type == "Burger")
            builder->buildBurger(order->getItems().at(i)->name,"Cheese");
            else if(order->getItems().at(i)->method == type && order->getItems().at(i)->type == "Macaroni"|| order->getItems().at(i)->type == "Spaghetti" )
            builder->buildPasta(order->getItems().at(i)->name,order->getItems().at(i)->type);
            else builder->buildPizza(order->getItems().at(i)->name,"Thick");
            order->addFood(builder->getFood());
        }

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