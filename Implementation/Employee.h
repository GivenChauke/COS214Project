#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

#include "Department.h"
#include "Table.h"
#include "TableIterator.h"
#include <vector>

using namespace std;
class Table;

class Employee {
public:
    Employee(int id);
    virtual void assignTables(std::vector<Table*>& tables);
    void iterateTables();
    void moveToNextTable();
    Department* getDepartment();
    Table* getCurrentTable();
    void setDepartment(Department* dep);
    void setCurrTable(Table* currTab);
    void getReview(const std::vector<Review*>& reviewList);
    void takeOrder(Table* table);
    int getEmployeeId();
    ~Employee();
protected:
    Department* department;
    vector<Table*> tables;
    Table* currTable;
    TableIterator* tableIterator;
    int employeeId;
};
#endif