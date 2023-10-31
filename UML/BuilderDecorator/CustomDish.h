#ifndef CUSTOMDISH_H
#define CUSTOMDISH_H

namespace Main_Class_Diagram {
	class CustomDish : Food {

	public:
		string name;

		string getName();

		void setName(string name);
	};
}

#endif
