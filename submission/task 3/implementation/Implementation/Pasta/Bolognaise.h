#ifndef BOLOGNAISE_H
#define BOLOGNAISE_H

#include "PastaType.h"

/**
 * @brief The Bolognaise class represents Bolognaise pasta, which is a specific type of PastaType.
 */
class Bolognaise : public PastaType {
public:
    /**
     * @brief Constructor for Bolognaise to set its name and cost.
     */
    Bolognaise();

    /**
     * @brief Destructor for Bolognaise.
     */
    ~Bolognaise();
};

#endif