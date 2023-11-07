#ifndef PASTABASE_H
#define PASTABASE_H

#include "Pasta.h"

/**
 * @brief The pastaBase class represents the base of a pasta dish, which is a specific type of Pasta.
 */
class pastaBase : public Pasta {
public:
    /**
     * @brief Constructor for pastaBase.
     */
    pastaBase();

    /**
     * @brief Returns the cost of the pasta.
     * @return The cost of the pasta.
     */
    virtual double total();

    /**
     * @brief Virtual method to decorate the pasta.
     * @param pasta A pointer to the Pasta to be decorated.
     */
    virtual void decorate(Pasta*);

    /**
     * @brief Destructor for pastaBase.
     */
    ~pastaBase();
};

#endif
