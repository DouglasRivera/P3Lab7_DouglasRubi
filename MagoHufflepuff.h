#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H

#include "Mago.h"

class MagoHufflepuff : public Mago
{
	
	public:
	    virtual string toString();
		MagoHufflepuff();
		int getPaciencia();
	
	protected:
	
	private:
		int paciencia;
};

#endif