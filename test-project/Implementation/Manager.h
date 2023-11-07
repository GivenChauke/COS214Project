#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
public:
    Manager(int id);
    void getReviewsForFloorDepartment();
};

#endif // MANAGER_H
