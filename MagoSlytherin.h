#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>  
#include "Mago.h"

class MagoSlytherin : public Mago
{
	private:
		
		int liderazgo;

	public:
	    
		virtual string toString();
		MagoSlytherin();
		int getLiderazgo();
				
	protected:
		
};

#endif