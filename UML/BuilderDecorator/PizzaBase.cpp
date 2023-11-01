#include "PizzaBase.h"

PizzaBase::PizzaBase() {
	setName("Pizza Base");
}

double PizzaBase::total() {
	return getCost(); 
}

PizzaBase::~PizzaBase() {
	// // TODO - implement PizzaBase::~PizzaBase
	// throw "Not yet implemented";
}
