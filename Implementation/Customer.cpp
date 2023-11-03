#ifndef CUSTOMER_CPP
#define CUSTOMER_CPP
#include <iostream>
#include <string>
using namespace std;
#include "Customer.h"
#include<cstdlib>
#include "RandomString.h"
#include "Customer.h"
#include <ctime>
#include "Menu.h"

class Order;
class Bill;
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

void Customer::receiveOrder(Order* order)
{
    /*Food* food= order->getFood();
    if(food->getRandomFoodQuality()<=5)//bad
    {
        delete state;
        state= new Angry();
    }
    else{//good
        delete state;
        state= new Happy();
    }*/

}


Order* Customer::PlaceOrder()
{
    /*Order * order= new Order();
    order->setOrderStatus(new Received());
    vector<FoodItem*>items;
    srand((unsigned) time(NULL));
    int foodItem;
    int orderAgain=2;
    Menu* menu=Menu::getMenu();//added getter for vector menu
    while(orderAgain%2==0)
    {
        //order food item
        foodItem=rand()%9;
                                        //get for vector with food items
        FoodItem* it= new FoodItem(menu->getmenuItem.at(foodItem).name, menu->getmenuItem.at(foodItem).price, menu->getmenuItem.at(foodItem).method, menu->getmenuItem.at(foodItem).type);
        items.push_back(it);
        //order decorator
        foodItem=rand()%23 +8;
        if(foodItem !=8)
        {
            it= new FoodItem(menu->getmenuItem.at(foodItem).name, menu->getmenuItem.at(foodItem).price, menu->getmenuItem.at(foodItem).method, menu->getmenuItem.at(foodItem).type);
            items.push_back(it);   
        }
        orderAgain=rand();
    }

    float cost=0.0;
    for(int i=0; i<items.size(); i++)
    {
        cost+=items.at(i)->price;
    }

    order->setItems(items);
    Bill* bill= new Bill();
    bill->setOrder(items);
    bill->setCost(cost);
    bill->setPaid(false);
    bill->setCustomer(*this);
    order->setBill(bill);
    return order;*/
}

#endif