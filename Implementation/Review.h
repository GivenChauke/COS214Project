#ifndef REVIEW_H
#define REVIEW_H
#include <string>

class Review {
public:
    Review(const std::string& comment, int rating);
    std::string getReviewComment() const;
    int getRating() const;
    bool operator==(const Review& other) const;
private:
    std::string ReviewComment;
    int Rating;
};
#endif // REVIEW_H
