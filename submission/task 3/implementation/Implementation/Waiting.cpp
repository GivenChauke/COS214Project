#include "Waiting.h"
#include "AbstractTable.h"
using namespace std;

string Waiting::getStatus(){
    return "Waiting";
}

bool Waiting::action(){
    if(this->table == nullptr){
        cout << "Unknown table is waiting, lol" << endl;
        return false;
    } else {
        cout << "Table " << table->getTableID() << " is waiting for their order" << endl;
        return true;
    }
}
