#include "BurgerTopping.h"

BurgerTopping::BurgerTopping() {
	topping = 0;
}

double BurgerTopping::total() {
	if (topping == 0) {
        return getCost();
    } else {
        return getCost() + topping->total();
    }
}

void BurgerTopping::decorate(Burger* burgerTopping) {
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