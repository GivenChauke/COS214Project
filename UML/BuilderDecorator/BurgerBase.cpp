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
