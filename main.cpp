#include <iostream>
#include "Item.h"
#include "Bomba.h"
#include "Normal.h"
#include "Espina.h"
#include "Jugador.h"
#include "Escenario.h"
#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>

//funcion para el menu
int menu();
//funcion para salir del programa
void salir();

using namespace std;
int main(){
	int op;
	int escenario;
	op=menu();
	switch(op){
		case 1:{
				   
			   }
			   break;
		case 3:{
				   salir();

			   }
			   break;
	}


	return 0;
}

void salir(){
	erase();
	endwin();
	exit(0);
}

int menu(){
	initscr();
	int x,y;
	getmaxyx(stdscr,y,x);
	move(0,(x/2-18));
	printw("****Menu Principal****");
	move(2,1);
	printw("1. Escenario invisible");
	move(3,1);
	printw("2. Escenario del tren");
	move(4,1);
	printw("3.salir del juego");
	int cx=0;
	int cy=0;
	int tecla;
	move(cx,cy);
	refresh();
	while(true){
		noecho();
		tecla=getch();
		if(tecla==10){
			if(cy==2){
				return 1;
	
			}
			if(cy==3){
				return 2;

			}
			if(cy==4){
				return 3;
			}

		}
		else{
			if(tecla==65&& cy>2){
				cy=cy-1;
				move(cy,cx);
			}
			else if(tecla==6&&cy<=4){
				cy=cy+1;
				move(cy,cx);
	
			}
			else{

			}

		}
		refresh();
	}
	echo();
	
}
