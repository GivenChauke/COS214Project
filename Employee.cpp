#include "Employee.h"
#include "KitchenDepartment.h"
#include "FloorDepartment.h"
#include <iostream>
#include <vector>
#include "Table.h"

Employee::Employee(int id) : department(nullptr), tables(nullptr), currTable(nullptr) {
    employeeId = id;
}

void Employee::assignTables(std::vector<Table*>& tables) {
    tableIterator = new TableIterator(tables);
}

void Employee::iterateTables() {
    if (tableIterator) {
        Table* table = tableIterator->first();
        while (table) {
            table->getTableNumber();
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

void Employee::TakeOrder(Table* table) {
    if (table) {
        // Process the order and add it to the queue
    }
}

Employee::~Employee() {
    if (tableIterator) {
        delete tableIterator;
    }
}
