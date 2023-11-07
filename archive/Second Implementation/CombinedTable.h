#ifndef COMBINEDTABLE_H
#define COMBINEDTABLE_H

#include "AbstractTable.h"
#include <vector>
#include "Order.h"

/**
 * @file CombinedTable.h
 * @brief Declaration of the CombinedTable class.
 */

/**
 * @class CombinedTable
 * @brief Represents a combined table that can group multiple AbstractTable instances.
 */
class CombinedTable : public AbstractTable
{
private:
    vector<AbstractTable*> table;

public:
    /**
     * @brief Constructor for the CombinedTable class.
     */
    CombinedTable();

    /**
     * @brief Destructor for the CombinedTable class.
     */
    ~CombinedTable();

    /**
     * @brief Add an AbstractTable to the combined table.
     * @param table A pointer to the AbstractTable to be added.
     * @return true if the addition was successful, false otherwise.
     */
    bool AddTable(AbstractTable* table);

    /**
     * @brief Separate an AbstractTable from the combined table.
     * @return A pointer to the separated AbstractTable, or NULL if the combined table is empty.
     */
    AbstractTable* SeparateTable();

    /**
     * @brief Place orders for all tables in the combined table.
     * @return A vector of Order pointers representing the placed orders.
     */
    vector<Order*> PlaceOrder();
};

#endif
