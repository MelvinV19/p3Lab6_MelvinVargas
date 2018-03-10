#include "Escenario.h"
#include "Invisible.h"
#include <stdlib.h>
#include <time.h>

Invisible::Invisible(){

}

Invisible::Invisible(int vidas,int tipobomba):Escenario(nombre){
		srand(time(NULL));
		vidas=rand() % 3+1;
		this->tipobomba=tipobomba;

}
