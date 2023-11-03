#ifndef BURGERTOPPING_H
#define BURGERTOPPING_H
#include "Burger.h"

	class BurgerTopping : public Burger {
	private:
		Burger* topping;
	public:
		BurgerTopping();
		virtual double total();
		virtual void decorate(Burger* burgerTopping);
	protected:	
		~BurgerTopping();
	};

#endif
