#ifndef BOMBA_H
#define BOMBA_H
#include "Item.h"
using namespace std;
class Bomba:public Item{
	private:
	
	public:
		int turnoexplotar;
		Bomba();
		Bomba(int);
		int getTurnoExplotar();
		void setTurnoExplotar(int);

};
#endif
