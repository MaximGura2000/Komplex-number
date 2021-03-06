#pragma once

enum typOperace { soucet = 1, rozdil, soucin  };

enum formatZobrazeni {algebraicky = 1, geometricky};

struct complex
{
	double real;
	double imag;
};

struct complex operace(struct complex a, struct complex b, enum typOperace typ);

void tisk(struct complex a, enum formatZobrazeni format);