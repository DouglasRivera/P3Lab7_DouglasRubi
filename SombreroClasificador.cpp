#include "SombreroClasificador.h"
ClaseHogwarts* SombreroClasificador::clasificarMagos(vector<Mago*> Magos,int y){
	ClaseHogwarts* retval=new ClaseHogwarts(y);
	int conts=0,contr=0,conth=0,contg=0;
	
	
	for(int i=0;i<Magos.size();i++){
		if(typeid( *Magos[i])==typeid(MagoSlytherin)){
			MagoSlytherin* magos=dynamic_cast<MagoSlytherin*>(Magos[i]);
			retval->addMagoS(magos);
			conts++;
		}
		if(typeid( *Magos[i])==typeid(MagoHufflepuff)){
			MagoHufflepuff* magoh=dynamic_cast<MagoHufflepuff*>(Magos[i]);
			retval->addMagoH(magoh);
			conth++;
		}
		if(typeid( *Magos[i])==typeid(MagoRavenclaw)){
			MagoRavenclaw* magor=dynamic_cast<MagoRavenclaw*>(Magos[i]);
			retval->addMagoR(magor);
			contr++;
		}
					
		if(typeid( *Magos[i])==typeid(MagoGryffindor)){
			MagoGryffindor* magog=dynamic_cast<MagoGryffindor*>(Magos[i]);
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