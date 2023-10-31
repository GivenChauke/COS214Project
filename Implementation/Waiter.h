#ifndef WAITER_H
#define WAITER_H

#include "Employee.h"

class Waiter : public Employee {
public:
    Waiter(int id);
    void getReviewsForKitchenDepartment();
};

#endif // WAITER_H
