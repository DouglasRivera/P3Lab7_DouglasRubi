#include "MagoSlytherin.h"
#include <stdio.h>      
#include <time.h>  
string MagoSlytherin::toString(){
	

	
}
MagoSlytherin::MagoSlytherin(){
	srand (time(NULL));
	this->astucia=rand() % 21+ 80;	
	this->inteligencia=rand() % 101;
	this->lealtad=rand() % 101;
	this->valentia=rand() % 101;
	this->liderazgo=rand() % 21+ 80;
	
}
int MagoSlytherin::getLiderazgo(){
	return this->liderazgo;
}