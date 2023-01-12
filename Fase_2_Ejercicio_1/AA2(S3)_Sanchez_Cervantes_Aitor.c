#define _CRT_SECURE_NO_WARNINGS

//Likamos las librerías
#include <stdio.h>
#include <stdbool.h>

//Algoritmo Digitos

int main(void) {
// Declaracion de variables

	int n, numero, contador, numeroProvisional, numero1, numeroCentena;
	bool digitos;

	contador = 0;
	n = 1;

	while (n < 1000) {
		
		digitos = false;

		if (n < 10) {
			if (n == 9) {
				digitos = true;
			}
		}
		else 
			if (n < 100) {
				numero = ((n / 10) + (n % 10));
				if (numero > 9) {
					numero = ((numero / 10) + (numero % 10));
				}
				if (numero == 9) {
					digitos = true;
				}
			}
			else
				if (n < 1000) {
					numeroProvisional = (n / 10);
					numero1 = (n % 10);
					numeroCentena = ((numeroProvisional / 10) + (numeroProvisional % 10) + (numero1));
					if (numeroCentena > 9) {
						numeroCentena = ((numeroCentena / 10) + (numeroCentena % 10));
					}
					if (numeroCentena == 9) {
						digitos = true;
					}
				}	
			if (digitos == true) {
				contador++;
			}
		n++;
	}
	printf( "Multiplos de 9: %d\n", contador);
	return 0;
}
		
		
