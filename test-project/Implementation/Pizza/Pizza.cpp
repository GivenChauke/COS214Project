#include "Pizza.h"

double Pizza::getCost() {
	return cost;
}

void Pizza::setCost(double cost) {
	this->cost = cost;
}

Pizza::Pizza() {
	cost = 0.0;
}

Pizza::~Pizza() {
}