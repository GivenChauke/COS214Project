#ifndef PASTABASE_H
#define PASTABASE_H

namespace Main_Class_Diagram {
	class pastaBase : Pasta {


	public:
		pastaBase();

		double total();

		void decorate(Pasta* p);
	};
}

#endif
