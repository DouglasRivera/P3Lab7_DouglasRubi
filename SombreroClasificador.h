#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include "Mago.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoSlytherin.h"
#include "MagoGryffindor.h"
#include "ClaseHogwarts.h"
#include <vector>
class SombreroClasificador
{
	
		
	public:
		SombreroClasificador();
		ClaseHogwarts* clasificarMagos(vector<Mago*>,int);
		

};

#endif