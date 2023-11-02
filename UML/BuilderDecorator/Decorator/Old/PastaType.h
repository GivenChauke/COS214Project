#ifndef PASTATYPE_H
#define PASTATYPE_H
#include "pasta.h"

	class PastaType : public Pasta {
	private:
		Pasta* typePasta;
	public:
		PastaType();
		double total();
		void decorate(Pasta* pastaType);
		~PastaType();
	};

#endif
