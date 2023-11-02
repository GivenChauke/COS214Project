#include "BurgerBase.h"

BurgerBase::BurgerBase() {
	// setName("Burger Base"); //?
}

double BurgerBase::total() {
	return getCost();
}

void BurgerBase::decorate(Burger* b) {
	// TODO - implement BurgerBase::decorate
	// throw "Not yet implemented";
}

BurgerBase::~BurgerBase() {
	// // TODO - implement BurgerBase::~BurgerBase
	// throw "Not yet implemented";
}