#ifndef FLOORDEPARTMENT_H
#define FLOORDEPARTMENT_H

#include "Department.h"

class FloorDepartment : public Department {
public:
    void TakeReview(const Review& review) override;
    void DisplayReviews() override;
    double CalculateAverageRating() const override;
    void DeleteReview(const Review& review) override;
};

#endif // FLOORDEPARTMENT_H
