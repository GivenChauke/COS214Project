#include "Floor.h"

Floor::Floor(int capacity){
    this->capacity = capacity;
    for(int i = 0; i < capacity; i++){
        // tables.push_back(new Table());
    }
    manager = nullptr;
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

