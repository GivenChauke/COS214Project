#include "Floor.h"
#include <cmath>

Floor::Floor(int capacity){
    this->capacity = capacity;
    for(int i = 0; i < capacity; i++){
        Table* table = new Table();
        tables.push_back(new Table());
    }
    manager = nullptr;
    numOccupiedTables = 0;
}

Employee* Floor::createManager(){
    manager = manager != nullptr? manager: new Manager(0);
    return manager;
}

Employee * Floor::createWaiter(){
    if(waiters.size() == capacity) return nullptr;
    Waiter* waiter = new Waiter(waiters.size() + 1);
    waiters.push_back(waiter);
    return waiter;
}

bool Floor::addCustomerGroup(CustomerGroup* group){
    if(tables.size() == 0) return false;
    int numberOfCustomers = group->NumOfCustomer();
    if(numberOfCustomers <= 0) return false;
    int tableSize = tables[0]->getMaxPeople();
    int numberOfTablesNeeded = ceil((float) numberOfCustomers/tableSize);
    if(tables.size() - numOccupiedTables < numberOfTablesNeeded) return false;
    int counter = 0;
    std::vector<Table*> tableVector;
    for(Table* table: tables){
        if(table->getTableState()->getStatus() == "NotOccupied"){
            if(counter == numberOfTablesNeeded) break;
            table->setCustomerGroup(group);
            table->setOccupied(true);
            tableVector.push_back(table);
            counter++;
        }
    }

    for(Employee* waiter: waiters){
        Waiter* currWaiter = dynamic_cast<Waiter*>(waiter);
        if(!currWaiter->isFullyOccupied()){
            currWaiter->assignTables(tableVector);
            return true;
        }
    }

    return false;
}

