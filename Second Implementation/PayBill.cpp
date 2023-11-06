#include "AbstractTable.h"
#include "PayBill.h"

using namespace std;

string PayBill::getStatus(){
    return "PayBill";
}

bool PayBill::action(){
    if(table != nullptr) {
        cout << "Unknown table is ready to pay, lol" << endl;
        return false;
    }else{
        cout << "Table " << table->getTableID() << " is waiting to pay the bill" << endl;
        return true;
    }
}
