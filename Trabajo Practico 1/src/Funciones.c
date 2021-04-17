
#include "Funciones.h"


	float Suma(float x, float y)
{
	float sumar;

	sumar = x + y;

	return sumar;
}

float Resta(float x, float y)
{

	float restar;

	restar = x - y;

	return restar;
}

float Division(float x, float y)
{
	float division;

	division = x/y;

	return division;
}

float Multiplicacion(float x, float y)
{

	float multiplicacion;

	multiplicacion = x * y;

	return multiplicacion;
}

int FactorialX(int x)
{
	int i;
	int resultadoX;

	resultadoX = 1;


	for(i=x;i>1;i--)
	{
		resultadoX = resultadoX * i;
	}

	return resultadoX;
}

int FactorialY(int y)
{
	int i;
	int resultadoY;

	resultadoY = 1;

	for(i=y;i>1;i--)
	{
		resultadoY = resultadoY * i;
	}

		return resultadoY;
}
