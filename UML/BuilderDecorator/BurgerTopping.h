#ifndef BURGERTOPPING_H
#define BURGERTOPPING_H

namespace Main_Class_Diagram {
	class BurgerTopping : Burger {

	public:
		Burger* toppingBurger;

		BurgerTopping();

		double total();
	};
}

#endif
