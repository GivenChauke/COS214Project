#include "PizzaType.h"

PizzaType::PizzaType() {
	type = 0;
}

double PizzaType::total() {
	if (type == 0) {
        return getCost();
    } else {
        return getCost() + type->total();
    }
}

void PizzaType::decorate(Pizza* pizzaType) {
	cout << "In Pizza add" << endl;
    if (type == 0){
        type = pizzaType;
    } else {
        type->decorate(pizzaType);
    }
}

PizzaType::~PizzaType() {
	delete type;
}
