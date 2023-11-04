#ifndef WAITER_H
#define WAITER_H
#include <vector>
#include "Employee.h"

class Waiter : public Employee {
private:
    int maxTables;
public:
    void setMaxTables(int);
    bool isFullyOccupied();
    void assignTables(vector<Table*>& tables);
    Waiter(int id);
    void getReviewsForKitchenDepartment();
};

#endif // WAITER_H
