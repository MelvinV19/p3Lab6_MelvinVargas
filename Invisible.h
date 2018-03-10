#ifndef INVISIBLE_H
#define INVISIBLE_H
#include "Escenario.h"


class Invisible:public Escenario{
	private:

	public:
		int vidas;
		int tipobomba;
		Invisible();
		Invisible(int,int);
		int getVidas();
		int getTipoBomba();
		
		void setTipoBomba();
};
#endif
