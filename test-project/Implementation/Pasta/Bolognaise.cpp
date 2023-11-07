#include "Bolognaise.h"

Bolognaise::Bolognaise() : PastaType () {
	setName("Bolognaise");
	cout << "Creating Bolognaise" << endl;
    setCost(10.0);
}

Bolognaise::~Bolognaise() {
}
