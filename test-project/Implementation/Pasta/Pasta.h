#ifndef PASTA_H
#define PASTA_H

#include "../Food.h"
#include <string>
#include <iostream>

/**
 * @brief The Pasta class represents a generic pasta dish.
 */
class Pasta : public Food {
private:
    double cost; ///< Cost of the pasta.

public:
    /**
     * @brief Constructor for Pasta to set its cost to 0.0.
     */
    Pasta();

    /**
     * @brief Virtual method to decorate the pasta. 
     * @param pasta A pointer to the Pasta to be decorated.
     */
    virtual void decorate(Pasta*) = 0;

    /**
     * @brief Virtual method to get the total cost of the pasta.
     * @return The total cost of the pasta.
     */
    virtual double total() = 0;

    /**
     * @brief Get the cost of the pasta.
     * @return The cost of the pasta.
     */
    double getCost();

    /**
     * @brief Set the cost of the pasta.
     * @param cost The cost of the pasta.
     */
    void setCost(double cost);

    /**
     * @brief Virtual destructor for Pasta.
     */
    virtual ~Pasta();
};

#endif

