#include "PastaType.h"

PastaType::PastaType() {
	type = 0;
}

double PastaType::total() {
	if (type == 0) {
        return getCost();
    } else {
        return getCost() + type->total();
    }
}

void PastaType::decorate(Pasta* pastaType) {
	cout << "In Pasta add" << endl;
    if (type == 0){
        type = pastaType;
    } else {
        type->decorate(pastaType);
    }
}

PastaType::~PastaType() {
	delete type;
}