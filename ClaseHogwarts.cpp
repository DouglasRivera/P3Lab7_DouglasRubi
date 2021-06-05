#include "ClaseHogwarts.h"
ClaseHogwarts::ClaseHogwarts(){
	
}
void ClaseHogwarts::print(){
	for(int i=0;i<this->magosgryffindor.size();i++){
		MagoGryffindor* mago=this->magosgryffindor[i];
		cout<<"Casa Gryffin: "<<endl;
		cout<<"Mago: "<<i<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"Atrevimiento: "<<mago->getAtrevimiento()<<endl;
		cout<<"Astucia : "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
			
	}
	//
	for(int i=0;i<this->magosslytherin.size();i++){
		MagoSlytherin* mago=this->magosslytherin[i];
		cout<<"Casa Slytherin: "<<endl;
		cout<<"Mago: "<<i<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"Liderazgo: "<<mago->getLiderazgo()<<endl;		
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;	
	}
	for(int i=0;i<this->magosravenclaw.size();i++){
		MagoRavenclaw* mago=this->magosravenclaw[i];
		cout<<"Casa Ravenclaw: "<<endl;
		cout<<"Mago: "<<i<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"Creatividad: "<<mago->getCreatividad()<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;			
	}
	for(int i=0;i<this->magoshufflepuff.size();i++){
		MagoHufflepuff* mago=this->magoshufflepuff[i];
		cout<<"Casa Hufflepuff: "<<endl;
		cout<<"Mago: "<<i<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"paciencia: "<<mago->getPaciencia()<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;	
	}
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
void ClaseHogwarts::addMagoS(MagoSlytherin* m){
	this->magosslytherin.push_back(m);
}
void ClaseHogwarts::addMagoH(MagoHufflepuff* m){
	this->magoshufflepuff.push_back(m);
}
void ClaseHogwarts::addMagoG(MagoGryffindor* m){
	this->magosgryffindor.push_back(m);
}
void ClaseHogwarts::addMagoR(MagoRavenclaw* m){
	this->magosravenclaw.push_back(m);
}
void ClaseHogwarts::promediohabilidades(int a,int b,int c,int d){
    float promastucia1,prominteligencia1, promlealtad1,promvalentia1;
	float promastucia2,prominteligencia2,promlealtad2,promvalentia2;
	float promastucia3,prominteligencia3,promlealtad3,promvalentia3;
	float promastucia4,prominteligencia4,promlealtad4,promvalentia4;
	float prom;
		for(int i=0;i<this->magosgryffindor.size();i++){
			MagoGryffindor* mago=this->magosgryffindor[i];
		    promastucia1+=mago->getAstucia();
			prominteligencia1+=mago->getInteligencia();
			promlealtad1+=mago->getLealtad();
			promvalentia1+=mago->getValentia();
			prom+=mago->getAtrevimiento();		
		}
		cout<<"Casa Gryffindor: "<<endl;
		cout<<"Los Magos que hay: "<<c<<endl;
		cout<<"Valentia: "<<promvalentia1/a<<endl;
		cout<<"atrevimiento: "<<prom/a<<endl;
		cout<<"Astucia: "<<promastucia1/a<<endl;
		cout<<"Inteligence: "<<prominteligencia1/a<<endl;
		cout<<"Lealtad: "<<promlealtad1/a<<endl;
		float proml;
		
			for(int i=0;i<this->magosslytherin.size();i++){
			MagoSlytherin* mago=this->magosslytherin[i];
		    promastucia2+=mago->getAstucia();
			prominteligencia2+=mago->getInteligencia();
			promlealtad2+=mago->getLealtad();
			promvalentia2+=mago->getValentia();
			proml+=mago->getLiderazgo();
			
		}
		cout<<"Casa Slytherin: "<<endl;
		cout<<"Los Magos que hay: "<<c<<endl;
		cout<<"Valentia: "<<promvalentia2/b<<endl;
		cout<<"Liderazgo: "<<proml/b<<endl;
		cout<<"Astucia: "<<promastucia2/b<<endl;
		cout<<"Inteligence: "<<prominteligencia2/b<<endl;
		cout<<"Lealtad: "<<promlealtad2/b<<endl;
		float promh;
		
		for(int i=0;i<this->magoshufflepuff.size();i++){
			MagoHufflepuff* mago=this->magoshufflepuff[i];
		    promastucia3+=mago->getAstucia();
			prominteligencia3+=mago->getInteligencia();
			promlealtad3+=mago->getLealtad();
			promvalentia3+=mago->getValentia();
			promh+=mago->getPaciencia();
			
		}
		cout<<"Casa Hufflepuff: "<<endl;
		cout<<"Los Magos que hay: "<<c<<endl;
		cout<<"Valentia: "<<promvalentia3/c<<endl;
		cout<<"Paciencia: "<<promh/c<<endl;
		cout<<"Astucia: "<<promastucia3/c<<endl;
		cout<<"Inteligence: "<<prominteligencia3/c<<endl;
		cout<<"Lealtad: "<<promlealtad3/c<<endl;
		float promc;
		
		for(int i=0;i<this->magosravenclaw.size();i++){
			MagoRavenclaw* mago=this->magosravenclaw[i];
		    promastucia4+=mago->getAstucia();
			prominteligencia4+=mago->getInteligencia();
			promlealtad4+=mago->getLealtad();
			promvalentia4+=mago->getValentia();
			promc+=mago->getCreatividad();
		}
		cout<<"Casa Ravenclaw: "<<endl;
		cout<<"Los Magos que hay: "<<c<<endl;
		cout<<"Valentia: "<<promvalentia4/d<<endl;
		cout<<"Paciencia: "<<promc/d<<endl;
		cout<<"Astucia: "<<promastucia4/d<<endl;
		cout<<"Inteligence: "<<prominteligencia3/d<<endl;
		cout<<"Lealtad: "<<promlealtad4/d<<endl;
}