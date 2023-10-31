#ifndef PIZZATYPE_H
#define PIZZATYPE_H

namespace Main_Class_Diagram {
	class PizzaType : Pizza {

	public:
		Pizza* typePizza;

		PizzaType();

		double total();

		void decorate(Pizza* pizzaType);
	};
}

#endif
