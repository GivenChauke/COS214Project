#include "Pizza.h"

// string Pizza::getName() {
// 	return name;
// }

// void Pizza::setName(string name) {
// 	this->name = name;
// }

double Pizza::getCost() {
	return cost;
}

void Pizza::setCost(double cost) {
	this->cost = cost;
}

// void Pizza::decorate(Pizza* p) {
// 	// TODO - implement Pizza::decorate
// 	throw "Not yet implemented";
// }

double Pizza::total() {
	return getCost();
}

Pizza::Pizza() {
	cost = 0.0;
}

// Pizza::~Pizza() {
// 	// TODO - implement Pizza::~Pizza
// 	throw "Not yet implemented";
// }