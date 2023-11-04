#ifndef BILLCARETAKER_H
#define BILLCARETAKER_H
#include <string>
#include<vector>
#include<map>
#include "BillMemento.h"
using namespace std;

class BillCaretaker {
    private:
        vector<BillMemento*> bills;
    
    public:
        BillCaretaker();
        void storeMemento(BillMemento* mem);
        BillMemento* retrieveMemento(string customerID);

};
#include "BillCaretaker.cpp"
#endif