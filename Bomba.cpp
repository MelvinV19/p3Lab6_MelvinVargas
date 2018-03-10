#include "Bomba.h"
#include "Item.h"
#include <iostream>
using namespace std;

Bomba::Bomba(){

}

Bomba::Bomba(int turnoexplotar):Item(x,y){
	this-> turnoexplotar=turnoexplotar;

}

int Bomba::getTurnoExplotar(){
	return turnoexplotar;
}

void Bomba::setTurnoExplotar(int turnoexplotar){
	this-> turnoexplotar=turnoexplotar;
}

	
