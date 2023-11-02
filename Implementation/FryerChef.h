#ifndef FRYERCHEF
#define FRYERCHEF
#include "Chef.h"

class FryerChef:public Chef{
    public :
    Order* cook(Order*);
    FryerChef(Chef*,string);
    ~FryerChef();
};
#endif