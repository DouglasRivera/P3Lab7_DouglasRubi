#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H

#include "Mago.h"

class MagoRavenclaw : public Mago
{
	
	public:
	    virtual string toString();
		MagoRavenclaw();		
		int getCreatividad();
		
	protected:
	
	private:
		int creatividad;
		
};

#endif