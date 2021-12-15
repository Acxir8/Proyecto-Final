#include <stdio.h>
#include "Operaciones.h"

int main()
{
	int fin = 0, operacion, a, b, resultado;
	while (fin!=1)
	{
		printf("Digite 2 numeros: ");
		//scanf_s("%i %i", &a, &b);
		a = 5; 
		b = 5;
		printf("Que operacion desea realizar? \n 1.-Suma\n 2.-Resta\n 3.-Multiplicacion\n 4.-Division\n ");
		scanf_s("%i", & operacion);
		switch (operacion)
		{
		case 1: 
			resultado = suma(a, b);
			printf("El resultado de la suma es: %i\n", resultado);
			break;
		case 2: 
			resultado = resta(a, b);
			printf("El resultado de la resta es: %i\n", resultado);
			break;
		case 3: 
			resultado = multiplicacion(a, b);
			printf("El resultado de la multiplicacion es: %i\n", resultado);
			break;
		case 4: 
			resultado = division(a, b);
			printf("El resultado de la division es: %i\n", resultado);
			break;
		default:
			break;
		}
   }
}

