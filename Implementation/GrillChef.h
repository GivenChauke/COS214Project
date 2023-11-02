#ifndef GRILLCHEF
#define GRILLCHEF
#include "Chef.h"

class GrillChef:public Chef{
    public :
    Order* cook(Order*);
    GrillChef(Chef*,string);
    ~GrillChef();
};
#endif