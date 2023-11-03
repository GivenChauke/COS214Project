#include "Pasta.h"

// string Pasta::getName() {
// 	// TODO - implement Pasta::getName
// 	throw "Not yet implemented";
// }

// void Pasta::setName(string name) {
// 	// TODO - implement Pasta::setName
// 	throw "Not yet implemented";
// }

double Pasta::getCost() {
	return cost;
}

void Pasta::setCost(double cost) {
	this->cost = cost;
}

// void Pasta::decorate(Pasta* p) {
// 	// TODO - implement Pasta::decorate
// 	throw "Not yet implemented";
// }

// double Pasta::total() {
// 	return getCost();
// }

Pasta::Pasta() {
	cost = 0.0;
}

Pasta::~Pasta() {
	// // TODO - implement Pasta::~Pasta
	// throw "Not yet implemented";
}
