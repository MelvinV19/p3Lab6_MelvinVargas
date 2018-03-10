#include "Escenario.h"
#include "Item.h"
using namespace std;
Escenario::Escenario(){

}

Escenario::Escenario(string nombre){
	this->nombre=nombre;
}

Item*** Escenario::crearmatriz(){
	matriz=new Item**[13];
	for(int i=0;i<13;i++){
		matriz[i]=new Item*[11];
	}
	return matriz;
}


