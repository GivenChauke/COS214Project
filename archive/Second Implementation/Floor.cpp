#include "Floor.h"
#include "NotOccupied.h"
#include "NotReadyToOrder.h"
#include <cmath>
using namespace std;

Floor::Floor(int capacity){
    this->capacity = capacity;

    for(int i = 0; i < capacity; i++){
        Table* table = new Table();
        table->setTableID(i);
        table->setTableState(new NotOccupied());
        tables.push_back(table);
    }

    manager = nullptr;
    numOccupiedTables = 0;
    numAvailableWaiters = 0;
}

void Floor::reorderMaxTablesForWaiters(){
    int numTables = tables.size();
    int tablesPerWaiter = numTables/waiters.size();
    cout << waiters.size() << " waiters are currently serving " << tablesPerWaiter << " tables each" << endl;
    for(Employee* waiter: waiters){
        Waiter* currWaiter = dynamic_cast<Waiter*>(waiter);
        currWaiter->setMaxTables(tablesPerWaiter);
    }
}

Employee* Floor::createManager(){
    manager = manager != nullptr? manager: new Manager(0);
    return manager;
}

Employee * Floor::createWaiter(){
    if(waiters.size() == capacity) {
        cout << "Oops, looks like we're overstaffed" << endl;
        return nullptr;
    }
    Waiter* waiter = new Waiter(waiters.size() + 1);
    waiters.push_back(waiter);
    numAvailableWaiters++;
    reorderMaxTablesForWaiters();
    return waiter;
}

void Floor::waiterIterateTables(){
    for(Employee* waiter: waiters){
        waiter->iterateTables();
    }
}

bool Floor::addCustomerGroup(CustomerGroup* group){
    if(group==nullptr) return false;
    string people_person = group->NumOfCustomer() == 1 ? "person" : "people";
    cout << "Adding group with " << group->NumOfCustomer() << " " << people_person << endl;
    if(tables.size() == 0 || !hasAvailableWaiter()) {
        cout << "Unfortunately, there aren't any waiters or tables available" << endl;
        return false;
    }
    int numberOfCustomers = group->NumOfCustomer();
    if(numberOfCustomers <= 0) {
        cout << "We cannot add 0 people. Makes no sense, lol" << endl;
        return false;
    }
    int tableSize = tables[0]->getMaxPeople();
    int numberOfTablesNeeded = ceil((float) numberOfCustomers/tableSize);
    if(tables.size() - numOccupiedTables < numberOfTablesNeeded) {
        cout << "Unfortunately, we do not have enough seats for you guys. Come back later" << endl;
        return false;
    }

    int counter = 0;
    std::vector<Table*> tableVector;
    for(Table* table: tables){
        if(!table->getOccupied()){
            if(counter == numberOfTablesNeeded) break;
            table->setCustomerGroup(group);
            table->setOccupied(true);
            table->setTableState(new NotReadyToOrder());
            tableVector.push_back(table);
            counter++;
        }
    }

    for(Employee* waiter: waiters){
        Waiter* currWaiter = dynamic_cast<Waiter*>(waiter);

        if(!currWaiter->isFullyOccupied()){
            currWaiter->assignTables(tableVector);

            numOccupiedTables += numberOfTablesNeeded;
            cout << "Welcome to our restaurant. Please have a seat. Our staff will come back to you when you are ready to order" << endl;
            return true;
        }
    }

    cout << "We are currently under-staffed right now. Please come back later" << endl;

    return false;
}

bool Floor::hasAvailableWaiter(){
    for(Employee* waiter: waiters){
        Waiter* currWaiter = dynamic_cast<Waiter*>(waiter);
        if(!currWaiter->isFullyOccupied()) return true;
    }
    return false;
}

