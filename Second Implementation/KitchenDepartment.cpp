#include "KitchenDepartment.h"
#include <iostream>
#include <algorithm>

void KitchenDepartment::TakeReview(const Review& review) {
    reviews.push_back(review);
    std::cout << "Review processed by KitchenDepartment." << std::endl;
}

void KitchenDepartment::DisplayReviews() {
    std::cout << "KitchenDepartment Reviews:" << std::endl;
    for (const Review& review : reviews) {
        std::cout << "Comment: " << review.getReviewComment() << ", Rating: " << review.getRating() << std::endl;
    }
}

double KitchenDepartment::CalculateAverageRating() const {
    double totalRating = 0.0;
    for (const Review& review : reviews) {
        totalRating += review.getRating();
    }
    return reviews.empty() ? 0.0 : totalRating / reviews.size();
}

void KitchenDepartment::DeleteReview(const Review& review) {
    auto it = std::remove(reviews.begin(), reviews.end(), review);
    if (it != reviews.end()) {
        reviews.erase(it, reviews.end());
        std::cout << "Review deleted from KitchenDepartment." << std::endl;
    }
}
