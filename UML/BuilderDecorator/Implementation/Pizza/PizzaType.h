#ifndef PIZZATYPE_H
#define PIZZATYPE_H
#include "pizza.h"

	class PizzaType : public Pizza {
	private:
		Pizza* type;
	public:
		PizzaType();
		virtual double total();
		virtual void decorate(Pizza* pizzaType);	
	protected:
    	~PizzaType();
	};

#endif
