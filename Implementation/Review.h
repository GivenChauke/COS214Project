#ifndef REVIEW_H
#define REVIEW_H
using namespace std;
#include <string>

class Review {
public:
    Review();
    Review(const std::string& comment, int rating);
    std::string getReviewComment() const;
    int getRating() const;
    bool operator==(const Review& other) const;
    void setRating(int r){this->Rating=r;}
    void setReviewComment(string c){this->ReviewComment=c;}
private:
    std::string ReviewComment;
    int Rating;
};
//#include "Review.cpp"
#endif // REVIEW_H
