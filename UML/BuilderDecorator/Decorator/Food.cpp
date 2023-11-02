#include "Food.h"

string Food::getName() {
	return name;
}

void Food::setName(string name) {
	this->name = name;
}

void Food::addIngredient(string ingredient) {
	ingredients.push_back(ingredient);
}

double Food::getCost() {
	return cost;
}

void Food::setCost(double cost) {
	this->cost = cost;
}
