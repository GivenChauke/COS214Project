#include "BurgerTopping.h"

BurgerTopping::BurgerTopping() {
	setName("Burger Topping"); //?
}

double BurgerTopping::total() {
	return getCost() + burgerTopping->total();
}

void BurgerTopping::decorate(Burger* burger) {
	burgerTopping = burger;
}

BurgerTopping::~BurgerTopping() {
	// // TODO - implement BurgerTopping::~BurgerTopping
	// throw "Not yet implemented";
}