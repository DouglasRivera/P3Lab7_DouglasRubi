#include <iostream>

using namespace std;
int menu();

int main() {
	int opcion;
	while((opcion = menu()) != 4) {
		switch (opcion) {
			case 1: {
				
				break;
			}
			case 2: {
				
				break;
			}
			case 3: {
				
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