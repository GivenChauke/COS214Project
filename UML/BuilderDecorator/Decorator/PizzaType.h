#ifndef PIZZATYPE_H
#define PIZZATYPE_H
#include "pizza.h"

	class PizzaType : public Pizza {
	private:
		Pizza* pizzaType;
	public:
		PizzaType();
		double total();
		void decorate(Pizza* pizzaType);
		~PizzaType();
	};


#endif
