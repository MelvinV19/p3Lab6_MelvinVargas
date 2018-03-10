#ifndef ESPINA_H
#define ESPINA_H
#include "Bomba.h"
using namespace std;

class Espina:public Bomba{
	private:
		int cantidad;

	public:
		Espina();
		Espina(int);
		int getCantidad();
		



};

#endif

