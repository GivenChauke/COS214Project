#include "Pasta.h"

double Pasta::getCost() {
	return cost;
}

void Pasta::setCost(double cost) {
	this->cost = cost;
}

Pasta::Pasta() {
	cost = 0.0;
}

Pasta::~Pasta() {
}
