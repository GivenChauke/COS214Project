#ifndef BURGERBASE_H
#define BURGERBASE_H
#include "Burger.h"

	class BurgerBase : public Burger {
	public:
		BurgerBase();
		double total();
		virtual void decorate(Burger*);
		~BurgerBase();
	};


#endif
