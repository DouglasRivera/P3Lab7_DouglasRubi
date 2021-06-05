#include <iostream>
#include <stdio.h>
#include <stdlib.h>     
#include <time.h> 
#include "Mago.h"
#include <typeinfo>
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoSlytherin.h"
#include "MagoGryffindor.h"
#include "ClaseHogwarts.h" 
#include "SombreroClasificador.h"
using namespace std;
int menu();
    
int main() {
	int opcion;
	vector<Mago*> Magos;
	ClaseHogwarts* Hogwarts;
	SombreroClasificador* sombrero = new SombreroClasificador;
	
	while((opcion = menu()) != 4) {
		switch (opcion) {
			case 1: {
				
				break;
			}
			case 2: {
				cout<<"La casa quedo de la siguiente manera"<<endl;
				Hogwarts->print();
				break;
			}
			case 3: {
				cout<<"Cualidades de los magos"<<endl;
				int conts=0,contr=0,conth=0,contg=0;
				for(int i=0;i<Magos.size();i++){
					if(typeid(*Magos[i])==typeid(MagoSlytherin)){
						conts++;
					}
					 if(typeid(*Magos[i])==typeid(MagoHufflepuff)){
						conth++;
					}
					if(typeid(*Magos[i])==typeid(MagoRavenclaw)){
						contr++;
					}
					
					 if(typeid(*Magos[i])==typeid(MagoGryffindor)){
						contg++;
					}
				}
				Hogwarts->promediohabilidades(contg,conts,conth,contr);	
				break;
			}
			case 4: {
                cout << "Saliendo del menu........" << endl;
				
				break;
		     }
		}//fin del switch
	}//fin while menu
	return 0;
}
int menu() {
		int opcion;
		cout << "----MENU----" << endl;
		cout << "1. Separar por Casa" << endl;
		cout << "2. Imprimir por Casa" << endl;
		cout << "3. Imprimir cualidades de cada mago por casa" << endl;
		cout << "4. Salir " << endl;
		cout << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		cout << endl;
		while(opcion < 1 || opcion > 3) {
			cout << "Seleccione una opcion dentro del rango disponible" << endl;
			cout << "Ingrese la opcion: ";
			cin >> opcion;
			cout << endl;
		}
		return opcion;
	}