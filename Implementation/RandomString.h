#ifndef RANDOM_STRING_H
#define RANDOM_STRING_H
#include <string>
using namespace std;
#include<iostream>

class RandomString
{
    public:
        static string PositiveComment[10];
        static string NegativeComment[10];
        RandomString(){
              // Initialize the PositiveComment array
            PositiveComment[0] = "The food here is absolutely delicious!";
            PositiveComment[1] = "The service is outstanding, and the staff is very friendly.";
            PositiveComment[2] = "The atmosphere is cozy and inviting.";
            PositiveComment[3] = "I highly recommend trying their special dishes.";
            PositiveComment[4] = "The restaurant is always clean and well-maintained.";
            PositiveComment[5] = "I had a fantastic dining experience here.";
            PositiveComment[6] = "The flavors in the dishes are amazing!";
            PositiveComment[7] = "The portion sizes are generous, and you get great value for your money.";
            PositiveComment[8] = "The desserts are to die for.";
            PositiveComment[9] = "I can't wait to come back to this restaurant.";

            // Initialize the NegativeComment array with 10 random negative comments
            NegativeComment[0] = "The food was disappointing and tasted bland.";
            NegativeComment[1] = "Service was slow, and the staff seemed indifferent.";
            NegativeComment[2] = "The restaurant had a dirty atmosphere.";
            NegativeComment[3] = "I regret trying their special dishes; they were not worth it.";
            NegativeComment[4] = "The cleanliness of the restaurant left much to be desired.";
            NegativeComment[5] = "My dining experience here was underwhelming.";
            NegativeComment[6] = "The flavors in the dishes were a letdown.";
            NegativeComment[7] = "The portion sizes were small for the price.";
            NegativeComment[8] = "Desserts were unimpressive and overpriced.";
            NegativeComment[9] = "I won't be returning to this restaurant.";
        }
};

// string RandomString::PositiveComment[0]="kmnb";
// string RandomString::PositiveComment[1]="kmnb";
// string RandomString::PositiveComment[2]="kmnb";
// string RandomString::PositiveComment[3]="kmnb";
// string RandomString::PositiveComment[4]="kmnb";
// string RandomString::PositiveComment[5]="kmnb";
// string RandomString::PositiveComment[6]="kmnb";
// string RandomString::PositiveComment[7]="kmnb";
// string RandomString::PositiveComment[8]="kmnb";
// string RandomString::PositiveComment[9]="kmnb";

// string RandomString::NegativeComment[0]="kmnb";
// string RandomString::NegativeComment[1]="kmnb";
// string RandomString::NegativeComment[2]="kmnb";
// string RandomString::NegativeComment[3]="kmnb";
// string RandomString::NegativeComment[4]="kmnb";
// string RandomString::NegativeComment[5]="kmnb";
// string RandomString::NegativeComment[6]="kmnb";
// string RandomString::NegativeComment[7]="kmnb";
// string RandomString::NegativeComment[8]="kmnb";
// string RandomString::NegativeComment[9]="kmnb";


#endif