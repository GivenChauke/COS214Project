#ifndef ABSTRACTDISHBUILDER_H
#define ABSTRACTDISHBUILDER_H

class AbstractDishBuilder {

public:
	virtual void buildPasta(string pastaType, string baseType);
	virtual void buildBurger(string burgerTopping, string baseType);
	virtual void buildPizza(string pizzaType, string baseType);
	virtual ~AbstractDishBuilder(){};

	// void addPizzaToppings(int string);
	// void addBurgerExtras(int string);
	// void addPastaExtras(int string);
	// void addCustomDishExtras(int string);
};

#endif
