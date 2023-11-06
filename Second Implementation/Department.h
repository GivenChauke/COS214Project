#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Review.h"
#include <vector>

class Department {
public:
    virtual void TakeReview(const Review& review) = 0;
    virtual void DisplayReviews() = 0;
    virtual double CalculateAverageRating() const = 0;
    virtual void DeleteReview(const Review& review) = 0;
protected:
    std::vector<Review> reviews;
};

#endif // DEPARTMENT_H
