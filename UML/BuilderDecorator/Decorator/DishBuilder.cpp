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
    Pasta* pasta = nullptr;

    if (pastaType == "Alfredo") {
        pasta = new Alfredo();
    } else if (pastaType == "Carbonara") {
        pasta = new Carbonara();
    } else if (pastaType == "Bolognaise") {
        pasta = new Bolognaise(); // Assuming you have a Bolognaise pasta class
    } else {
        cout << "Invalid pasta type." << std::endl;
        return;
    }

    if (baseType == "Macaroni") {
        pasta->decorate(new Macaroni());
    } else if (baseType == "Spaghetti") {
        pasta->decorate(new Spaghetti());
    } else {
        cout << "Invalid base type." << std::endl;
        delete pasta;
        return;
    }

    std::cout << "Cost = " << pasta->total() << std::endl;
    delete pasta;
}


void DishBuilder::buildBurger(string burgerTopping, string baseType) {
	Burger* burger = nullptr;

	if (burgerTopping == "Beef") {
		burger = new BeefBurger();
	} else if (burgerTopping == "Chicken") {
		burger = new ChickenBurger();
	} else if (burgerTopping == "Vegetarian") {
		burger = new VegetarianBurger(); // Assuming you have a VegetarianBurger class
	} else {
		cout << "Invalid burger topping." << std::endl;
		return;
	}

	if (baseType == "Cheese") {
		burger->decorate(new CheeseTopping());
	} else if (baseType == "Chilli") {
		burger->decorate(new ChilliTopping());
	} else if (baseType == "Onion") {
		burger->decorate(new OnionTopping());
	} else {
		cout  << "Invalid base type." << std::endl;
		delete burger;
		return;
	}

	cout << "Cost = " << burger->total() << std::endl;
	delete burger;
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
	Pizza* pizza = nullptr;

	if(pizzaType == "MeatSupreme") {
		pizza = new MeatSupremePizza();
	} else if (pizzaType == "Margherita") {
		pizza = new MargheritaPizza();
	} else if (pizzaType == "Pepperoni") {
		pizza = new PepperoniPizza(); // Assuming you have a PepperoniPizza class
	} else {
		cout << "Invalid pizza type." << std::endl;
		return;
	}

	if (baseType == "Thick") {
		pizza->decorate(new ThickBasePizza());
	} else if (baseType == "Thin") {
		pizza->decorate(new ThinBasePizza());
	} else {
		cout << "Invalid base type." << std::endl;
		delete pizza;
		return;
	}

	cout << "Cost = " << pizza->total() << endl;
	delete pizza;
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

Food* DishBuilder::getFood() {
	// TODO - implement DishBuilder::getFood
	throw "Not yet implemented";
}
