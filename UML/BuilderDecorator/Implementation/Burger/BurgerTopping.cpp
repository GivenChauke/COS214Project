#include "BurgerTopping.h"

BurgerTopping::BurgerTopping() {
	// setName("Burger Topping"); //?
	topping = 0;
}

double BurgerTopping::total() {
	// return getCost() + burgerTopping->total();
	if (topping == 0) {
        return getCost();
    } else {
        return getCost() + topping->total();
    }
}

void BurgerTopping::decorate(Burger* burgerTopping) {
	// burgerTopping = burger;
	cout << "In Burger add" << endl;
    if (topping == 0){
        topping = burgerTopping;
    } else {
        topping->decorate(burgerTopping);
    }
}

BurgerTopping::~BurgerTopping() {
	delete topping;
}