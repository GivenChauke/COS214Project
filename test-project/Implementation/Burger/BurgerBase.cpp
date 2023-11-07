#include "BurgerBase.h"

BurgerBase::BurgerBase() {
}

double BurgerBase::total() {
	return getCost();
}

void BurgerBase::decorate(Burger* b) {
}

BurgerBase::~BurgerBase() {
}