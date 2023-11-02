#include "PastaType.h"

PastaType::PastaType() {
	setName("Pasta Type");
}

double PastaType::total() {
	return getCost() + typePasta->total(); 
}

void PastaType::decorate(Pasta* pastaType) {
	typePasta = pastaType;
}

PastaType::~PastaType() {
	// // TODO - implement PastaType::~PastaType
	// throw "Not yet implemented";
}