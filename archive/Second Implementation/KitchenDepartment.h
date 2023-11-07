#ifndef KITCHENDEPARTMENT_H
#define KITCHENDEPARTMENT_H

#include "Department.h"

class KitchenDepartment : public Department {
public:
    void TakeReview(const Review& review) override;
    void DisplayReviews() override;
    double CalculateAverageRating() const override;
    void DeleteReview(const Review& review) override;
};

#endif // KITCHENDEPARTMENT_H
