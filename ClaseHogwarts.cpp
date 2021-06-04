#include "ClaseHogwarts.h"
ClaseHogwarts::ClaseHogwarts(){
	
}
ClaseHogwarts::ClaseHogwarts(int years){
	this->year=years;
}
vector<MagoSlytherin*> ClaseHogwarts::getMagosSlytherin(){
	return this->magosslytherin;
}
vector<MagoHufflepuff*> ClaseHogwarts::getMagosHufflepuff(){
	return this->magoshufflepuff;
}
vector<MagoGryffindor*> ClaseHogwarts::getMagosgryffindor(){
	return this->magosgryffindor;
}
vector<MagoRavenclaw*>ClaseHogwarts:: getMagosravenclaw(){
	return this->magosravenclaw;
}
//
void ClaseHogwarts:: setMagosSlytherin(vector<MagoSlytherin*> ms){
	this->magosslytherin=ms;
}
void ClaseHogwarts:: setMagosHufflepuff(vector<MagoHufflepuff*> mp){
	this->magoshufflepuff=mp;
}
void ClaseHogwarts::setMagosGryffindor(vector<MagoGryffindor*> mg){
	this->magosgryffindor=mg;
}
void ClaseHogwarts::setMagosRavenclaw(vector<MagoRavenclaw*> mr){
	this->magosravenclaw=mr;
	
}
void ClaseHogwarts::promedio_habilidades_por_casa(){
	
}