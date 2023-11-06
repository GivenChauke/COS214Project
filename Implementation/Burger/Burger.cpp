#include "Burger.h"

// string Burger::getName() {
// 	// TODO - implement Burger::getName
// 	throw "Not yet implemented";
// }

// void Burger::setName(string name) {
// 	// TODO - implement Burger::setName
// 	throw "Not yet implemented";
// }

double Burger::getCost() {
	return cost;
}

void Burger::setCost(double cost) {
	this->cost = cost;
}

// double Burger::total() {
// 	return getCost();
// }

// void Burger::decorate(Burger* b) {
// 	// // TODO - implement Burger::decorate
// 	// throw "Not yet implemented";
// }

Burger::Burger() {
	cost = 0.0;
}

Burger::~Burger() {
	// // TODO - implement Burger::~Burger
	// throw "Not yet implemented";
}