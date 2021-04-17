/*

Guido Gabriel Giniger
1 B

Trabajo practico 1

 Hacer una calculadora Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main(void) {
	setbuf(stdout, NULL);

	float numeroA;
	float numeroB;
	int menu;
	int flagOperacion;
	int resultadoFactorialA;
	int resultadoFactorialB;
	float resultadoSuma,resultadoResta,resultadoDiv,resultadoMult;

	numeroA = 0;
	numeroB = 0;
	flagOperacion = 0;

	printf("*** SELECCIONAR ***\n");

	while(flagOperacion == 0){
	printf(" \n1. Ingrese el primer numero:  \n");
	printf("2. Ingrese el segundo numero:  \n");
	printf("3. Calcular las operaciones:  \n");
	printf("4. Mostrar resultados:  \n");
	printf("5. Salir \n");

	scanf("%d",&menu);

	switch(menu)
	{
		case 1: printf("   Ingrese el primer numero: \n  ");
		scanf("%f", &numeroA);
		printf("El primer numero ingresado es: %.2f\n", numeroA);break;


		case 2: printf("   Ingrese el segundo numero: \n  ");
		scanf("%f", &numeroB);
		printf("El segundo numero ingresado es: %.2f\n", numeroB);break;

		case 3:
		printf(" ***REALIZANDO OPERACIONES***  ");

		if(numeroB == 0)
		{
			printf("MATH ERROR. No se puede dividir por cero. REINTENTAR\n ");break;
		}

		else
		{
		resultadoSuma = Suma(numeroA,numeroB);
		resultadoResta = Resta(numeroA,numeroB);
		resultadoDiv = Division(numeroA,numeroB);
		resultadoMult = Multiplicacion(numeroA,numeroB);
		resultadoFactorialA = FactorialX(numeroA);
		resultadoFactorialB = FactorialY(numeroB);break;
		}
		case 4:
		printf(" \nEl resultado  de la suma es: %.2f\n ", resultadoSuma);
		printf(" El resultado  de la resta es: %.2f\n ", resultadoResta);
		printf(" El resultado  de la division es: %.2f\n ", resultadoDiv);
		printf(" El resultado  de la multiplicacion es: %.2f\n ", resultadoMult);
		printf(" El resultado  del factorial del primer numero es: %d y del segundo numero es: %d\n ", resultadoFactorialA, resultadoFactorialB);break;

		case 5: printf(" Operacion finalizada.\n");
		flagOperacion = 1;break;

		default:
			printf("\nTiene que elegir una opcion entre 1 y 5\n"); break;
	}

	}
	return EXIT_SUCCESS;
}
