#include "PizzaType.h"

PizzaType::PizzaType() {
	setName("Pizza Type");
}

double PizzaType::total() {
	return getCost() + pizzaType->total(); 
}

void PizzaType::decorate(Pizza* pizzaType) {
	this->pizzaType = pizzaType;
}

PizzaType::~PizzaType() {
	// // TODO - implement PizzaType::~PizzaType
	// throw "Not yet implemented";
}
