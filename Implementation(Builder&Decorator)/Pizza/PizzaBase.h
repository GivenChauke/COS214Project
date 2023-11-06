#ifndef PIZZABASE_H
#define PIZZABASE_H
#include "pizza.h"

	class PizzaBase : public Pizza {
	public:
		PizzaBase();
		virtual double total();
		virtual void decorate(Pizza*);
		~PizzaBase();	
	};

#endif
