#include <iostream>
#include "Pizza.h"
#include "MeatSupremePizza.h"
#include "ThickBasePizza.h"
#include "ThinBasePizza.h"
#include "PepperoniPizza.h"

int main() {
    Pizza* myPizza;
    myPizza = new MeatSupremePizza();
    myPizza->decorate(new ThickBasePizza());
    cout << "Cost = " << myPizza->total() << endl;


    // Pizza* myPizza;
    // myPizza = new PepperoniPizza();
    // myPizza->decorate(new ThinBasePizza());
    // cout << "Cost = " << myPizza->total() << endl;

    
    delete myPizza;
    
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

