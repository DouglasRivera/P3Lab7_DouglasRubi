#ifndef CLASEHOGWARTS_H
#define CLASEHOGWARTS_H
#include "Mago.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoSlytherin.h"
#include "MagoGryffindor.h"
#include <vector>

class ClaseHogwarts
{
	private:
		int year;
		vector<MagoSlytherin*> magosslytherin;
		vector<MagoHufflepuff*> magoshufflepuff;
		vector<MagoGryffindor*> magosgryffindor;
		vector<MagoRavenclaw*> magosravenclaw;
		//
		
	public:
		void promedio_habilidades_por_casa();
		ClaseHogwarts();
		ClaseHogwarts(int);
		vector<MagoSlytherin*> getMagosSlytherin();
		vector<MagoHufflepuff*> getMagosHufflepuff();
		vector<MagoGryffindor*> getMagosgryffindor();
		vector<MagoRavenclaw*> getMagosravenclaw();
		//
		void setMagosSlytherin(vector<MagoSlytherin*>);
		void setMagosHufflepuff(vector<MagoHufflepuff*>);
		void setMagosGryffindor(vector<MagoGryffindor*>);
		void setMagosRavenclaw(vector<MagoRavenclaw*>);
		//
		int getYear();
		
	
};

#endif