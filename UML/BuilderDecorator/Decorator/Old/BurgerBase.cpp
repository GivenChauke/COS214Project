#include "BurgerBase.h"

BurgerBase::BurgerBase() {
	setName("Burger Base"); //?
}

double BurgerBase::total() {
	return getCost();
}

BurgerBase::~BurgerBase() {
	// // TODO - implement BurgerBase::~BurgerBase
	// throw "Not yet implemented";
}

void BurgerBase::decorate(Burger* burger) {
	// TODO - implement BurgerBase::decorate
	// throw "Not yet implemented";
}