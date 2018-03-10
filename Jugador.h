#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "Item.h"
using namespace std;

class Jugador:public Item{
	private:
		
	public:
		string nombre;
		bool estado;
		int controlador;
		Jugador();
		Jugador(string,bool,int);
		string getNombre();
		bool getEstado();
		int getControlador();
};

#endif
