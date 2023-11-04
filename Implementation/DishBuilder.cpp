#include "DishBuilder.h"
#include "Food.h"

#include "Pizza/Pizza.h"
#include "Pizza/MeatSupremePizza.h"
#include "Pizza/MargheritaPizza.h"
#include "Pizza/PepperoniPizza.h"
#include "Pizza/ThickBasePizza.h"
#include "Pizza/ThinBasePizza.h"

#include "Burger/Burger.h"
#include "Burger/BeefBurger.h"
#include "Burger/ChickenBurger.h"
#include "Burger/VegetarianBurger.h"
#include "Burger/CheeseTopping.h"
#include "Burger/ChilliTopping.h"
#include "Burger/OnionTopping.h"

#include "Pasta/Pasta.h"
#include "Pasta/Alfredo.h"
#include "Pasta/Carbonara.h"
#include "Pasta/Bolognaise.h"
#include "Pasta/Macaroni.h"
#include "Pasta/Spaghetti.h"

#include <iostream>
using namespace std;

DishBuilder::DishBuilder()
{
	food = nullptr;
}
// void DishBuilder::buildPasta() {
// 	// Pasta* myPasta;
//     // myPasta = new Alfredo();
//     // myPasta->decorate(new Spaghetti());
//     // cout << "Cost = " << myPasta->total() << endl;

//     // Pasta* myPasta;
//     // myPasta = new Carbonara();
//     // myPasta->decorate(new Macaroni());
//     // cout << "Cost = " << myPasta->total() << endl;
//     // delete myPasta;
// }



void DishBuilder::buildPasta( string pastaType, string baseType) {
    //Pasta* pasta = nullptr;

    if (pastaType == "Alfredo") {
        food = new Alfredo();
		food->setFoodQuality(rand()%10);
    } else if (pastaType == "Carbonara") {
        food = new Carbonara();
		food->setFoodQuality(rand()%10);
    } else if (pastaType == "Bolognaise") {
        food = new Bolognaise(); // Assuming you have a Bolognaise pasta class
		food->setFoodQuality(rand()%10);
    } else {
        cout << "Invalid pasta type." << std::endl;
        return;
    }

    if (baseType == "Macaroni") {
        food->decorate(new Macaroni());
		food->setFoodQuality(rand()%10);
    } else if (baseType == "Spaghetti") {
        food->decorate(new Spaghetti());
		food->setFoodQuality(rand()%10);
    } else {
        cout << "Invalid base type." << std::endl;
        //delete food;
        return;
    }

    //std::cout << "Cost = " << pasta->total() << std::endl;
    //delete pasta;
}


void DishBuilder::buildBurger(string burgerTopping, string baseType) {
	//Burger* burger = nullptr;

	if (burgerTopping == "Beef") {
		food = new BeefBurger();
		food->setFoodQuality(rand()%10);
	} else if (burgerTopping == "Chicken") {
		food = new ChickenBurger();
		food->setFoodQuality(rand()%10);
	} else if (burgerTopping == "Vegetarian") {
		food = new VegetarianBurger(); // Assuming you have a VegetarianBurger class
		food->setFoodQuality(rand()%10);
	} else {
		cout << "Invalid burger topping." << std::endl;
		return;
	}

	if (baseType == "Cheese") {
		food->decorate(new CheeseTopping());
		food->setFoodQuality(rand()%10);
	} else if (baseType == "Chilli") {
		food->decorate(new ChilliTopping());
		food->setFoodQuality(rand()%10);
	} else if (baseType == "Onion") {
		food->decorate(new OnionTopping());
		food->setFoodQuality(rand()%10);
	} else {
		cout  << "Invalid base type." << std::endl;
		//delete burger;
		return;
	}

	//cout << "Cost = " << burger->total() << std::endl;
	//delete burger;
	// Burger* myBurger;
    // myBurger = new CheeseTopping();
    // myBurger->decorate(new BeefBurger());
    // cout << "Cost = " << myBurger->total() << endl;

    // Burger* myBurger;
    // myBurger = new CheeseTopping();
    // myBurger->decorate(new ChilliTopping());
    // myBurger->decorate(new OnionTopping());
    // myBurger->decorate(new ChickenBurger());
    // cout << "Cost = " << myBurger->total() << endl;

    
    // delete myBurger;
}

void DishBuilder::buildPizza(string pizzaType, string baseType) {
	//Pizza* pizza = nullptr;

	if(pizzaType == "MeatSupreme") {
		food = new MeatSupremePizza();
		food->setFoodQuality(rand()%10);
	} else if (pizzaType == "Margherita") {
		food = new MargheritaPizza();
		food->setFoodQuality(rand()%10);
	} else if (pizzaType == "Pepperoni") {
		food = new PepperoniPizza(); // Assuming you have a PepperoniPizza class
		food->setFoodQuality(rand()%10);
	} else {
		cout << "Invalid pizza type." << std::endl;
		return;
	}

	if (baseType == "Thick") {
		food->decorate(new ThickBasePizza());
		food->setFoodQuality(rand()%10);
	} else if (baseType == "Thin") {
		food->decorate(new ThinBasePizza());
		food->setFoodQuality(rand()%10);
	} else {
		cout << "Invalid base type." << std::endl;
		//delete pizza;
		return;
	}

	//cout << "Cost = " << pizza->total() << endl;
	//delete pizza;
	// Pizza* myPizza;
    // myPizza = new MeatSupremePizza();
    // myPizza->decorate(new ThickBasePizza());
    // cout << "Cost = " << myPizza->total() << endl;

	// Pizza* myPizza;
    // myPizza = new PepperoniPizza();
    // myPizza->decorate(new ThinBasePizza());
    // cout << "Cost = " << myPizza->total() << endl;

    
    // delete myPizza;

}

DishBuilder::~DishBuilder()
{
	delete food;
}

Food* DishBuilder::getFood() {
	return this->food;
}
void DishBuilder::addExtras(string temp)
{
	food->addIngredient(temp);
}