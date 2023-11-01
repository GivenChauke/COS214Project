#ifndef BURGERTOPPING_H
#define BURGERTOPPING_H
#include "Burger.h"

	class BurgerTopping : public Burger {
	private:
		Burger* burgerTopping;
	public:
		BurgerTopping();
		double total();
		void decorate(Burger* burgerTopping);
		~BurgerTopping();
	};

#endif
