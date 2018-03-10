#include "Item.h"
#include <iostream>

Item::Item(){

}

Item::Item(int x,int y){
	this-> x=x;
	this-> y=y;
}

int Item::getX(){
	return x;
}

int Item::getY(){
	return y;
}

void Item::setX(int x){
	this->x=x;
}
	
void Item::setY(int y){
	this->y=y;

}
