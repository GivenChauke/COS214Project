#include "ReadyToOrder.h"
#include "AbstractTable.h"

using namespace std;

string ReadyToOrder::getStatus(){
    return "ReadyToOrder";
}

bool ReadyToOrder::action(){
    if(table == nullptr) {
        cout << "Unknown table is ready, lol" << endl;
        return false;
    }
    cout << "Table " << table->getRandomState() << " is waiting to place order" << endl;
    return true;
}

