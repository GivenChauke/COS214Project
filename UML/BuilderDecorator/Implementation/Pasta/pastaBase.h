#ifndef PASTABASE_H
#define PASTABASE_H
#include "pasta.h"

	class pastaBase : public Pasta {
	public:
		pastaBase();
		virtual double total();
		virtual void decorate(Pasta*);
		~pastaBase();
	};

#endif
