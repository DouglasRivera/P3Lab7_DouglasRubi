#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H

#include "Mago.h"

class MagoGryffindor : public Mago
{
	
	public:
	virtual string toString();
	MagoGryffindor();
	int getAtrevimiento();
	
	protected:
	
	private:
		int atrevimiento;
};

#endif