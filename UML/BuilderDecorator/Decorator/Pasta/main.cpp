#include <iostream>
#include "Pasta.h"
#include "Alfredo.h"
#include "Spaghetti.h"
#include "Carbonara.h"
#include "Macaroni.h"

int main() {
    // Pasta* myPasta;
    // myPasta = new Alfredo();
    // myPasta->decorate(new Spaghetti());
    // cout << "Cost = " << myPasta->total() << endl;

    Pasta* myPasta;
    myPasta = new Carbonara();
    myPasta->decorate(new Macaroni());
    cout << "Cost = " << myPasta->total() << endl;
    delete myPasta;
    
    return 0;
}



// Creating Alfredo
// Creating Spaghetti
// In Pasta add
// Cost = 22


// Creating Carbonara
// Creating Macaroni
// In Pasta add
// Cost = 23