#include "Waiter.h"
#include "KitchenDepartment.h"
#include <iostream>

Waiter::Waiter(int id) : Employee(id) {}

void Waiter::getReviewsForKitchenDepartment() {
    if (getDepartment()) {
        KitchenDepartment* kitchenDept = dynamic_cast<KitchenDepartment*>(getDepartment());
        if (kitchenDept) {
            kitchenDept->DisplayReviews();
        } else {
            std::cout << "Waiter can only get reviews for the Kitchen Department." << std::endl;
        }
    }
}
