#include <iostream>
#include "ChickenBurger.h"
#include "Spaghetti.h"
#include "BurgerTopping.h"
#include "PastaType.h"
using namespace std;


int main() {
    // Example usage:
    ChickenBurger chickenBurger;
    BurgerTopping cheeseBurgerTopping;
    cheeseBurgerTopping.decorate(&chickenBurger);
    cout << "Total cost of Chicken Burger with Cheese Topping: $" << cheeseBurgerTopping.total() << endl;

    Spaghetti spaghetti;
    PastaType carbonaraPastaType;
    carbonaraPastaType.decorate(&spaghetti);
    cout << "Total cost of Spaghetti with Carbonara: $" << carbonaraPastaType.total() << endl;

    return 0;
}