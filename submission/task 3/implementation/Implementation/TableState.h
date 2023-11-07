#ifndef TABLE_STATE
#define TABLE_STATE
#include <string>
#include <iostream>
using namespace std;


class AbstractTable;

class TableState
{
    protected:
        AbstractTable * table;

    public:
        TableState(){
            this->table = nullptr;
        }
        virtual string getStatus() = 0;
        virtual bool action() = 0;
        void setTable(AbstractTable* table){
            this->table = table;
        }

};
#endif
