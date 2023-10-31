#ifndef FOOD_H
#define FOOD_H

class Food {

private:
	string name;
	vector<strings> ingredients;
	int RandomFoodQuality;

public:
	string getName();

	void setName(string name);

	void addIngredient(string food);

	double getCost();

	void setCost(double d);
};

#endif
