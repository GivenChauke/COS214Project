#include "FryerChef.h"

FryerChef::FryerChef(Chef* nc,string type):Chef(nc,type)
{
    this->builder = new DishBuilder();
}
Order* FryerChef::cook(Order* order)
{
    if(processOrder(order))
    {
        cout<<"FryChef is frying your order please wait a moment..."<<endl;
        for(int i = 0;i < order->getItems().size();i++)
        {
            cout<<order->getItems().at(i)->name<<" "<<order->getItems().at(i)->method<<" "<<order->getItems().at(i)->type<<endl;
            if(order->getItems().at(i)== nullptr ) break;
            if(order->getItems().at(i)!= nullptr && order->getItems().at(i)->method.compare(type)==0 && order->getItems().at(i)->type.compare("Burger")==0)
            {
                builder->buildBurger(order->getItems().at(i)->name,"Cheese");
                order->addFood(builder->getFood());
            }
            else if(order->getItems().at(i)!= nullptr && order->getItems().at(i)->method.compare(type)==0 && (order->getItems().at(i)->type.compare("Macaroni")==0|| order->getItems().at(i)->type.compare("Spaghetti")))
            {
                builder->buildPasta(order->getItems().at(i)->name,order->getItems().at(i)->type);
                order->addFood(builder->getFood());
            }
            else if(order->getItems().at(i)!= nullptr && order->getItems().at(i)->method.compare(type)==0) {
                builder->buildPizza(order->getItems().at(i)->name,"Thick");
                order->addFood(builder->getFood());
            }
            //order->addFood(builder->getFood());
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