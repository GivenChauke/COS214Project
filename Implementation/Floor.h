#ifndef ABSTRACT_FLOOR_H
#define ABSTRACT_FLOOR_H

#include "Waiter.h"
#include "Employee.h"
#include "Manager.h"
#include "Iterator.h"
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
        int numAvailableWaiters;


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
        bool hasAvailableWaiter();
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
        void reorderMaxTablesForWaiters();
        void printTablesAndWaiters(){
            cout << "Printing floors and waiters" << endl;

            for(Table* table: tables){
                cout << "Table  " << table->getTableID() << " details:" << endl;
                cout << "State - " << table->EnquireState() << endl;
                table->getCustomerGroup()->print();
            }
            string hasAvailableWaiter = this->hasAvailableWaiter() ? "\033[31mYes\033[0m" : "\033[32mNo\033[0m";
            cout << endl << setw(35) << 
                            "Number of tables: " << tables.size() << endl << setw(35) <<
                            "Number of occupied tables: " << this->numOccupiedTables << endl << setw(35) <<
                            "Has available waiters: " << hasAvailableWaiter << endl ;

        }

};

#endif
