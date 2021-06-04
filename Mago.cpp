#include "Mago.h"
Mago::Mago(){
	
}
Mago::Mago(int astu,int inte, int leal,int val){
	this->astucia=astu;
	this->inteligencia=inte;
	this->lealtad=leal;
	this->valentia=val;
}
int Mago::getAstucia(){
	return this->astucia;
}
int Mago::getInteligencia(){
	return this->inteligencia;
	
}
int Mago::getLealtad(){
	return this->lealtad;
	
}
int Mago::getValentia(){
	return this->valentia;
}