#ifndef PASTATYPE_H
#define PASTATYPE_H

namespace Main_Class_Diagram {
	class PastaType : Pasta {

	public:
		Pasta* typePasta;

		PastaType();

		double total();

		void decorate(Pasta* pastaType);
	};
}

#endif
