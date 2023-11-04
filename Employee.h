#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <vector>
#include "Department.h"
#include "AbstractTable.h"

class Employee {
public:
    Employee(int id);
    void assignTables(std::vector<AbstractTable*>& tables);
    void iterateTables();
    void moveToNextTable();
    Department* getDepartment();
    AbstractTable* getCurrentTable();
    void setDepartment(Department* dep);
    void setCurrTable(Table* currTab);
    void GetReview(const std::vector<Review*>& reviewList);
    void TakeOrder(Table* table);
    ~Employee();

private:
    Department* department;
    Table* tables;
    Table* currTable;
    TableIterator* tableIterator;
    int employeeId;
};

#endif
