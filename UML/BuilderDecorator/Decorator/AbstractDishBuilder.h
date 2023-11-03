#ifndef ABSTRACTDISHBUILDER_H
#define ABSTRACTDISHBUILDER_H
#include <string>
#include <iostream>

class AbstractDishBuilder {
private:
    std::string type;
    std::string base;
public:
    virtual void buildPasta(std::string type, std::string base);
    virtual void buildBurger(std::string type, std::string base);
    virtual void buildPizza(std::string type, std::string base);
	virtual ~AbstractDishBuilder() {}
	
	
	// void addPizzaToppings(int string);
	// void addBurgerExtras(int string);
	// void addPastaExtras(int string);
	// void addCustomDishExtras(int string);
};

#endif
