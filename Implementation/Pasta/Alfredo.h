#ifndef ALFREDO_H
#define ALFREDO_H

#include "PastaType.h"

/**
 * @brief The Alfredo class represents Alfredo pasta, which is a specific type of PastaType.
 */
class Alfredo : public PastaType {
public:
    /**
     * @brief Constructor for Alfredo to set its name and cost.
     */
    Alfredo();

    /**
     * @brief Destructor for Alfredo.
     */
    ~Alfredo();
};

#endif