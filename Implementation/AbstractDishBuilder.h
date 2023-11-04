#ifndef ABSTRACTDISHBUILDER_H
#define ABSTRACTDISHBUILDER_H
#include <string>
#include <iostream>
#include "Food.h"

class AbstractDishBuilder {
protected:
    Food* food;
public:
	virtual ~AbstractDishBuilder() {}
    virtual void buildPasta(std::string type, std::string base) = 0;
    virtual void buildBurger(std::string type, std::string base) = 0;
    virtual void buildPizza(std::string type, std::string base) = 0;
	virtual void addExtras(std::string)=0;
    virtual Food* getFood()=0;

	
	// void addPizzaToppings(int string);
	// void addBurgerExtras(int string);
	// void addPastaExtras(int string);
	// void addCustomDishExtras(int string);
};

#endif
