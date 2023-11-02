#include <iostream>
#include "Burger.h"
#include "BeefBurger.h"
#include "CheeseTopping.h"
#include "ChilliTopping.h"
#include "OnionTopping.h"
#include "ChickenBurger.h"

int main() {
    // Burger* myBurger;
    // myBurger = new CheeseTopping();
    // myBurger->decorate(new BeefBurger());
    // cout << "Cost = " << myBurger->total() << endl;

    Burger* myBurger;
    myBurger = new CheeseTopping();
    myBurger->decorate(new ChilliTopping());
    myBurger->decorate(new OnionTopping());
    myBurger->decorate(new ChickenBurger());
    cout << "Cost = " << myBurger->total() << endl;

    
    delete myBurger;
    
    return 0;
}


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