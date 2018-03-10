#include "Espina.h"
using namespace std;

Espina::Espina(){

}

Espina::Espina(int cantidad):Bomba(turnoexplotar){
	this->cantidad=cantidad;
}

int Espina::getCantidad(){
	return cantidad;
}
