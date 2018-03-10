#ifndef TREN_H
#define TREN_H
#include "Escenario.h"
class Tren:public Escenario{
	private:

	public:
		int vagonx;
		int vagony;
		int tipobomba;
		Tren();
		Tren(int,int);
		int getVagonx();
		int getVagony();
		int getTipoBomba();
		

};
#endif
