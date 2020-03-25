#include "Polinom.h"

int main()
{
	Polinom p,p2,p3;
	p.citire();
	p2.citire();
	p3 = p2 * p;
	p3.afisare();
	double x = p.calculate(2);
	return 0;
}