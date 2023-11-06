#ifndef CARBONARA_H
#define CARBONARA_H

#include "PastaType.h"

/**
 * @brief The Carbonara class represents Carbonara pasta, which is a specific type of PastaType.
 */
class Carbonara : public PastaType {
public:
    /**
     * @brief Constructor for Carbonara to set its name and cost.
     */
    Carbonara();

    /**
     * @brief Destructor for Carbonara.
     */
    ~Carbonara();
};

#endif
