#include <iostream>
#include "Pizza/Pizza.h"
#include "Pizza/MeatSupremePizza.h"
#include "Pizza/ThickBasePizza.h"
#include "Pizza/ThinBasePizza.h"
#include "Pizza/PepperoniPizza.h"
#include "Burger/Burger.h"
#include "Burger/BeefBurger.h"
#include "Burger/CheeseTopping.h"
#include "Burger/ChilliTopping.h"
#include "Burger/OnionTopping.h"
#include "Burger/ChickenBurger.h"
#include "Pasta/Pasta.h"
#include "Pasta/Alfredo.h"
#include "Pasta/Spaghetti.h"
#include "Pasta/Carbonara.h"
#include "Pasta/Macaroni.h"
#include "DishBuilder.h"
#include "AbstractDishBuilder.h"

int main() {
    DishBuilder dishBuilder;

    dishBuilder.buildPasta("Alfredo", "Macaroni");









    // Pasta* myPasta;
    // myPasta = new Alfredo();
    // myPasta->decorate(new Spaghetti());
    // cout << "Cost = " << myPasta->total() << endl;

    // Pasta* myPasta;
    // myPasta = new Carbonara();
    // myPasta->decorate(new Macaroni());
    // cout << "Cost = " << myPasta->total() << endl;
    // delete myPasta;

    // Pizza* myPizza;
    // myPizza = new MeatSupremePizza();
    // myPizza->decorate(new ThickBasePizza());
    // cout << "Cost = " << myPizza->total() << endl;


    // // Pizza* myPizza;
    // // myPizza = new PepperoniPizza();
    // // myPizza->decorate(new ThinBasePizza());
    // // cout << "Cost = " << myPizza->total() << endl;

    
    // delete myPizza;


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

    // Pasta* myPasta;
    // myPasta = new Alfredo();
    // myPasta->decorate(new Spaghetti());
    // cout << "Cost = " << myPasta->total() << endl;

    // Pasta* myPasta;
    // myPasta = new Carbonara();
    // myPasta->decorate(new Macaroni());
    // cout << "Cost = " << myPasta->total() << endl;
    // delete myPasta;
    
    return 0;

}
// Creating Meat Supreme Pizza
// Creating a thick base
// In Pizza add
// Cost = 17


// Creating Pepperoni Pizza
// Creating a thin base
// In Pizza add
// Cost = 16




// Creating Cheese Topping
// Creating a Beef Burger
// In Burger add
// Cost = 7


// Creating Cheese Topping
// Creating Chilli Topping
// In Burger add
// Creating Onion Topping
// In Burger add
// In Burger add
// Creating a Chicken Burger
// In Burger add
// In Burger add
// In Burger add
// Cost = 9


// Creating Alfredo
// Creating Spaghetti
// In Pasta add
// Cost = 22


// Creating Carbonara
// Creating Macaroni
// In Pasta add
// Cost = 23