#include "Manager.h"
#include "FloorDepartment.h"
#include <iostream>

Manager::Manager(int id) : Employee(id) {}

void Manager::getReviewsForFloorDepartment() {
    if (getDepartment()) {
        FloorDepartment* floorDept = dynamic_cast<FloorDepartment*>(getDepartment());
        if (floorDept) {
            floorDept->DisplayReviews();
        } else {
            std::cout << "Manager can only get reviews for the Floor Department." << std::endl;
        }
    }
}
