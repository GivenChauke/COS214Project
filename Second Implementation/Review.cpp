#ifndef REVIEW_CPP
#define REVIEW_CPP

#include "Review.h"
#include <stdexcept>

Review::Review(const std::string& comment, int rating) {
    if (comment.length() <= 255) {
        ReviewComment = comment;
    } else {
        throw std::invalid_argument("Review comment exceeds 255 characters");
    }
    Rating = rating;
}

std::string Review::getReviewComment() const {
    return ReviewComment;
}

int Review::getRating() const {
    return Rating;
}

bool Review::operator==(const Review& other) const {
    return (ReviewComment == other.ReviewComment) && (Rating == other.Rating);
}

Review::Review()
{
    
}

#endif