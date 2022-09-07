/*
 ============================================================================
 Name        : Ejercicio4_1.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio 4-1 - Tema 4
 Description :

Ejercicio 4-1: Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
un número. Utilizar la función de PedirNumero de la ejercitación 3.

Por ejemplo:
5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ingresarNumero();

int main()
{
	setbuf(stdout, NULL);
	int numero;
	int factorial = 1;

	numero = ingresarNumero();

	for (int i = 1; i <= numero; i++)
	{
		factorial = factorial * i;
	}

	printf("\nEL FACTORIAL ES :\n");
	printf("!%d = ", numero);

	for(int k = numero; k > 0; k--)
	{
		printf("%d", k);

		if(k != 1)
		{
			printf(" * ");
		}
	}

	printf(" = %d", factorial);

	return 0;
}


int ingresarNumero()
{
	int numero;

	printf("Ingrese un numero : ");
	scanf("%d", &numero);

	return numero;
}


