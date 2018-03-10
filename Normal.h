#ifndef NORMAL_H
#define NORMAL_H
#include "Bomba.h"
class Normal:public Bomba{
	private:
		int alcance;
	public:
		Normal();
		Normal(int);
		int getAlcance();


};

#endif
