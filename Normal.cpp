#include "Normal.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

Normal::Normal(){

}

Normal::Normal(int alcance):Bomba(turnoexplotar){
	srand(time(NULL));
	alcance=rand() % 4+1;
}

int Normal::getAlcance(){
	return alcance;
}
