#ifndef PIZZABASE_H
#define PIZZABASE_H
#include "pizza.h"

	class PizzaBase : public Pizza {
	public:
		PizzaBase();
		double total();
		virtual void decorate(Pizza* );
		~PizzaBase();
	};

#endif
