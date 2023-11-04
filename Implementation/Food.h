#ifndef FOOD_H
#define FOOD_H
#include <string>
#include <vector>
using namespace std;
#include <iostream>
class Burger;
class Pizza;
class Pasta;
class Food {
protected:
	string name;
	vector<string> ingredients;
	int RandomFoodQuality;
	double cost;
public:
	Food();
	void setFoodQuality(int);
	int getFoodQuality();
	string getName();
	void setName(string name);
	void addIngredient(string ingredient);//for extras
	virtual double total() = 0;
	double getCost();
	void setCost(double cost);
	virtual ~Food();
	virtual void decorate(Burger*) ;
	virtual void decorate(Pizza*) ;
	virtual void decorate(Pasta*) ;
	};

#endif
