#include "Carbonara.h"

Carbonara::Carbonara() : PastaType () {
	setName("Carbonara");
	cout << "Creating Carbonara" << endl;
    setCost(17.0);
}

Carbonara::~Carbonara() {
}