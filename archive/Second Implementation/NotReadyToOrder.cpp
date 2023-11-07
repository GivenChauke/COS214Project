#include "AbstractTable.h"
#include "NotReadyToOrder.h"
#include "ReadyToOrder.h"
using namespace std;


string NotReadyToOrder::getStatus(){
    return "NotReadyToOrder";
}

bool NotReadyToOrder::action(){
    if(table == nullptr){
        cout << "Unknown table is not ready to order, lol" << endl;
        return false;
    }
    if(table->getCustomerGroup()->getRandomState() > 0){
        cout << "Table " << table->getTableID() << " not yet ready to order: " << table->getRandomState() << endl;
        table->getCustomerGroup()->decrementRandomState();
        return false;
    } else{
        cout << "Table " << table->getTableID() << " is now ready to order" << endl;
        TableState* state = new ReadyToOrder();
        state->setTable(table);
        this->table->setTableState(state);
        return true;
    }
}



