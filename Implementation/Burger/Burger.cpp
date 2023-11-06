#include "Burger.h"

double Burger::getCost() {
	return cost;
}

void Burger::setCost(double cost) {
	this->cost = cost;
}

Burger::Burger() {
	cost = 0.0;
}

Burger::~Burger() {

}