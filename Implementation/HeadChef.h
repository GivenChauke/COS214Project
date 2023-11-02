#ifndef HEADCHEF
#define HEADCHEF
#include "Chef.h"

class HeadChef:public Chef{
    public :
    Order* cook(Order*);
    HeadChef(Chef*,string);//end of chain thus next here should be null
    ~HeadChef();
};
#endif