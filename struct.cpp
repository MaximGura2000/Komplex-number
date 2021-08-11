#include <iostream>
#include <cmath>
#include "struct.h"

using namespace std;

#define PI 3.14159265

struct complex operace(struct complex a, struct complex b, enum typOperace typ)
{
	complex c;
	if (typ == 1)
	{
		c.real = a.real + b.real;
		c.imag = a.imag + b.imag;
		return c;
	}
	if (typ == 2)
	{
		c.real = a.real - b.real;
		c.imag = a.imag - b.imag;
		return c;
	}
	if (typ == 3)
	{
		c.real = a.real * b.real + a.imag * b.imag;
		c.imag = a.real * b.imag + a.imag * b.real ;
		return c;
	}
}


void tisk(struct complex a, enum formatZobrazeni format)
{
	if (format == 1)
	{
		if (a.imag > 0)
		{
			cout << a.real <<"+"<< a.imag << "j";
		}
		if(a.imag < 0)
			cout << a.real << a.imag<<"j";
	}
	if (format == 2)
	{
		double cislo;
		double mocnina;
		mocnina = atan(a.imag / a.real) *180.0 / PI;
		cislo = sqrt(a.real * a.real + a.imag * a.imag);

		cout << cislo<<"*e^j("<< mocnina <<")deg";
	}
}