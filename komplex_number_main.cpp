#include <iostream>
#include "struct.h"

using namespace std;

int main()
{
	complex a;// first complex number
	cout << "Realni cast prvniho cisla je ";
	cin >> a.real;// real part of the first complex number
	cout << endl; 
	cout << "Imaginarni cast prvniho cisla je ";
	cin >> a.imag;// imaginary part of the first complex number
	cout << endl;

	complex b;//second complex number
	cout << "Realni cast druheho cisla je ";
	cin >> b.real;// real part of the second complex number
	cout << endl;
	cout << "Imaginarni cast druheho cisla je ";
	cin >> b.imag;// imaginary part of the second complex number
	cout << endl;

	int typ = 0;//variable responsible for choosing one of the three operations (addition, subtraction or multiplication)
	cout << "Zvolte '1' pokud chcete soucet cisel, '2' pokud chcete rozdil nebo '3' pokud chcete soucin:";
	while (typ < 1 || typ > 3)
	{
		cin >> typ;
	}
	cout << endl;

	complex c = operace( a, b, typOperace(typ));//result of an algebraic operation
	
	int format = 0;//choice of one of two types of recording
	cout << "Zvolte '1' pokud chcete algebraickou nebo '2' pokud chcete geometrickou formu zapisu:";
	while (format < 1 || format > 2)
	{
		cin >> format;
	}
	cout << endl;

	tisk(c, formatZobrazeni(format));//console output

	return 0;
}