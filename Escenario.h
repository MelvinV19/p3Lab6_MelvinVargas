#ifndef ESCENARIO_H
#define ESCENARIO_H
#include "Item.h"
#include "Bomba.h"
#include <string>
#include <vector>
class Escenario{
	private:

	public:
		vector<Bomba*> bombas;
		string nombre;
		Item*** matriz;
		Item*** crearmatriz();
		Escenario();
		Escenario(string);
		string getNombre();

};

#endif
