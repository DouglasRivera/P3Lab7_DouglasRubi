#include "SombreroClasificador.h"
ClaseHogwarts* SombreroClasificador::clasificarMagos(vector<Mago*> lista,int y){
	ClaseHogwarts* retval=new ClaseHogwarts(y);
	int conts=0,contr=0,conth=0,contg=0;
	for(int i=0;i<lista.size();i++){
		if(typeid( *lista[i])==typeid(MagoSlytherin)){
			MagoSlytherin* magos=dynamic_cast<MagoSlytherin*>(lista[i]);
			retval->addMagoS(magos);
			conts++;
		}
		if(typeid( *lista[i])==typeid(MagoHufflepuff)){
			MagoHufflepuff* magoh=dynamic_cast<MagoHufflepuff*>(lista[i]);
			retval->addMagoH(magoh);
			conth++;
		}
		if(typeid( *lista[i])==typeid(MagoRavenclaw)){
			MagoRavenclaw* magor=dynamic_cast<MagoRavenclaw*>(lista[i]);
			retval->addMagoR(magor);
			contr++;
		}
					
		if(typeid( *lista[i])==typeid(MagoGryffindor)){
			MagoGryffindor* magog=dynamic_cast<MagoGryffindor*>(lista[i]);
			retval->addMagoG(magog);
			contg++;
		}
	}
	cout<<"Cantidad de Magos Slytherin: "<<conts<<endl;
	cout<<"Cantidad de Magos Hufflepluff: "<<conth<<endl;
	cout<<"Cantidad de Magos Ravenclaw: "<<contr<<endl;
	cout<<"Cantidad de Magos Gryffdindor: "<<contg<<endl;
	return retval;
}
SombreroClasificador::SombreroClasificador(){
	
}