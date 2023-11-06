#ifndef ABSTRACT_FLOOR_H
#define ABSTRACT_FLOOR_H

#include "Waiter.h"
#include "Employee.h"
#include "Manager.h"
#include "TableIterator.h"
#include "Table.h"
#include "CombinedTable.h"
#include <iomanip>
using namespace std;
class Table;
class CustomerGroup;

/**
 * @class Floor
 * 
 *
 * @brief This is the interface for floor
 * 
 */

class Floor{
    protected:
        std::vector<Table*> tables;
        std::vector<Employee*> waiters;
        Manager* manager;
        /**
         * @brief 
         * 
         */
        int capacity; 
        int numOccupiedTables;

    public:
        /**
         * @brief Construct a new Floor object. Passes in the number of tables in the floor.
         * 
         */
        Floor(int);
        /**
         * @brief Create a Waiter object, and adds it to the list of waiters. Number of waiters cannot exceed number of tables
         * returns null if waiters reached capacity
         *
         * @return Employee* 
         */
        Employee* createWaiter();
        /**
         * @brief Create a Manager object. If manager already exists, then current manager is returned
         * 
         * @return Employee* 
         */
        Employee* createManager();
         /**
          * @brief Adds customer group to tables and assigns the group to a waiter
          * 
          * @return true if customer group is added
          * @return false if restaurant is full
          */
        bool addCustomerGroup(CustomerGroup*);
        /**
         * @brief performs one cycle of the waiter iteration
         * 
         */
        void waiterIterateTables();
        void printTablesAndWaiters(){
            cout << "Printing floors and waiters" << endl;

            for(Table* table: tables){
                cout << setw(10) << table->getTableState() << "|";
            }
            cout << endl << "Number of tables: " << tables.size() << "\nNumber of occupied tables: " << this->numOccupiedTables << endl;
        }

};

#endif