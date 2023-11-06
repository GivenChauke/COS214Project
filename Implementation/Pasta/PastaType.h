#ifndef PASTATYPE_H
#define PASTATYPE_H

#include "Pasta.h"

/**
 * @brief The PastaType class represents a specific type of pasta, which is a type of Pasta.
 */
class PastaType : public Pasta {
private:
    Pasta* type; ///< The type of pasta.

public:
    /**
     * @brief Constructor for PastaType to set cost to 0.0.
     */
    PastaType();

    /**
     * @brief Virtual method to get the total cost of the pasta.
     * @return The total cost of the pasta.
     */
    virtual double total();

    /**
     * @brief Virtual method to decorate the pasta.
     * @param pastaType A pointer to the Pasta to be decorated.
     */
    virtual void decorate(Pasta* pastaType);

protected:
    /**
     * @brief Destructor for PastaType.
     */
    ~PastaType();
};

#endif
