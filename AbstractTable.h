#ifndef ABSTRACTTABLE_H
#define ABSTRACTTABLE_H

class AbstractTable {
protected:
    int maxPeople;
    int currentPeople;
    int RandomState;
    static int counter;
    int tableID;
    bool occupied = false;

public:
    virtual void getTableNumber() = 0;
    virtual bool AddTable(AbstractTable* table) = 0;
    virtual AbstractTable* SeparateTable() = 0;
};

#endif
