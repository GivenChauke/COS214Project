#include "Employee.h"
#include "KitchenDepartment.h"
#include "FloorDepartment.h"
#include <iostream>
#include <vector>
#include "Table.h"

Employee::Employee(int id) : department(nullptr), tables(nullptr), currTable(nullptr), tableIterator(nullptr) {
    employeeId = id;
}

void Employee::assignTables(std::vector<Table*>& tables) {
    tableIterator = new TableIterator(tables);
}

void Employee::iterateTables() {
    cout << tableIterator << endl;
    if (tableIterator != nullptr) {
        Table* table = tableIterator->first();
        while (table) {
            //table->getTableNumber();

            CustomerGroup* group = table->getCustomerGroup();
            if(table->visitTable()){
                this->TakeOrder(table);
            }
            table = tableIterator->next();
        }
    }
}

void Employee::moveToNextTable() {
    if (tableIterator) {
        tableIterator->next();
    }
}

Department* Employee::getDepartment() {
    return department;
}

Table* Employee::getCurrentTable() {
    if (tableIterator) {
        return tableIterator->current();
    }
    return nullptr;
}

void Employee::setDepartment(Department* dep) {
    department = dep;
}

void Employee::setCurrTable(Table* currTab) {
    currTable = currTab;
}

void Employee::GetReview(const std::vector<Review*>& reviewList) {
    if (department) {
        for (const Review* review : reviewList) {
            department->TakeReview(*review);
        }
    }
}

vector<Order*> Employee::TakeOrder(Table* table) {
    if (table) {
        // Process the order and add it to the queue
        return table->getCustomerGroup()->PlaceOrder();
    }
    vector<Order*> dummy;

    return dummy;
}

Employee::~Employee() {
    if (tableIterator != nullptr) {
        //delete tableIterator;
    }
}
int Employee::getEmployeeId(){
    return employeeId;
}
