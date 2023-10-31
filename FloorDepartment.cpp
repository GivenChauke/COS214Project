#include "FloorDepartment.h"
#include <iostream>
#include <algorithm>

void FloorDepartment::TakeReview(const Review& review) {
    reviews.push_back(review);
    std::cout << "Review processed by FloorDepartment." << std::endl;
}

void FloorDepartment::DisplayReviews() {
    std::cout << "FloorDepartment Reviews:" << std::endl;
    for (const Review& review : reviews) {
        std::cout << "Comment: " << review.getReviewComment() << ", Rating: " << review.getRating() << std::endl;
    }
}

double FloorDepartment::CalculateAverageRating() const {
    double totalRating = 0.0;
    for (const Review& review : reviews) {
        totalRating += review.getRating();
    }
    return reviews.empty() ? 0.0 : totalRating / reviews.size();
}

void FloorDepartment::DeleteReview(const Review& review) {
    auto it = std::remove(reviews.begin(), reviews.end(), review);
    if (it != reviews.end()) {
        reviews.erase(it, reviews.end());
        std::cout << "Review deleted from FloorDepartment." << std::endl;
    }
}
