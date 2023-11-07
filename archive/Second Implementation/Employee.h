#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
#include "Department.h"

#include "TableIterator.h"

class Employee {
public:
    Employee(int id);
    virtual void assignTables(std::vector<Table*>& tables);
    virtual void iterateTables();
    void moveToNextTable();
    Department* getDepartment();
    Table* getCurrentTable();
    void setDepartment(Department* dep);
    void setCurrTable(Table* currTab);
    void GetReview(const std::vector<Review*>& reviewList);
    void TakeOrder(Table* table);
    int getEmployeeId();
    ~Employee();
protected:
    Department* department;
    Table* tables;
    Table* currTable;
    TableIterator* tableIterator;
    int employeeId;
};
#endif
