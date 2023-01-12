#define _CRT_SECURE_NO_WARNINGS        

//Likamos las librerías
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
	//Declaración de constantes
	const float PUNTOSxEUROS = 0.25;

	//Declaración de variables
	int producto, producto_max, n;
	float precio, precio_max, total, media;

	total = 0;
	media = 0.0;
	precio_max = 0.0;
	producto_max = 0;
	n = 0;



	printf("El codigo del producto es?\n");
	scanf("%d", &producto);


	while (producto > 0) {

		printf("El precio el producto es?\n");
		scanf("%f", &precio);
		printf("El codigo del producto es?\n");
		total = total + precio;

		if (precio > precio_max) {
			precio_max = precio;
			producto_max = producto;
		}

		n = n + 1;
		scanf("%d", &producto);

	}
	media = total / (float)n;

	printf("El importe total de la compra es: %f\n", total);
	printf("El precio medio de los productos es: %f\n", media);
	printf("El codigo del producto mas caro es: %d\n", producto_max);
	printf("La cantidad de puntos acumulados en la compra es: %f\n", total * PUNTOSxEUROS);

	return 0;
}
