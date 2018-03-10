#include "Jugador.h"
#include "Item.h"
#include <string>
#include <iostream>
using namespace std;

Jugador::Jugador(){

}

Jugador::Jugador(string nombre,bool estado,int controlador):Item(x, y){
	this->nombre=nombre;
	this->estado=estado;
	this->controlador=controlador;

}

string Jugador::getNombre(){
	return nombre;
}

bool Jugador::getEstado(){
	return estado;
}

int Jugador::getControlador(){
	return controlador;
}
