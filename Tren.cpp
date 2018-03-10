#include "Escenario.h"
#include <stdlib.h>
#include <time.h>
#include "Tren.h"
using namespace std;
Tren::Tren(){

}
Tren::Tren(int vagonx,int vagony):Escenario(nombre){
	this->vagonx=vagonx;
	this->vagony=vagony;
	srand(time(NULL));
	tipobomba=rand()% 3+1;

}

int Tren::getVagonx(){
	return vagonx;
}
int Tren::getVagony(){
	return vagony;
}

int Tren::getTipoBomba(){
	return tipobomba;
}
