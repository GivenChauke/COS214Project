#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Department.h"
#include "Table.h"
#include "TableIterator.h"
#include <vector>

class Employee {
public:
    Employee(int id);
    void assignTables(std::vector<Table*>& tables);
    void iterateTables();
    void moveToNextTable();
    Department* getDepartment();
    Table* getCurrentTable();
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

#endif // EMPLOYEE_H
