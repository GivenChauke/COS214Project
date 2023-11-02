#ifndef BILLCARE_H
#define BILLCARE_H

#include <bits/stdc++.h>
#include <string>
#include<vector>
#include<map>
#include "BillMemento.h"

class BillCaretaker {
    private:
        vector<map<std::string, BillMemento>> bills;
    
    public:
        BillCaretaker();
        void storeMemento(std::string ID, BillMemento* mem);
        BillMemento* retrieveMemento(std::string customerID);

};
#endif