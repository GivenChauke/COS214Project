#ifndef PASTATYPE_H
#define PASTATYPE_H
#include "pasta.h"

	class PastaType : public Pasta {
	private:
		Pasta* type;
	public:
		PastaType();
		virtual double total();
		virtual void decorate(Pasta* pastaType);
	protected:
		~PastaType();
	};

#endif
