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
	int producto, producto_max, n, n_perf, producto_perfumeria;
	float precio, precio_max, total, media, total_perfumeria, precio_perfumeria, media_perfumeria;

	total = 0;
	media = 0.0;
	precio_max = 0.0;
	producto_max = 0;
	n = 0;
	n_perf = 0;
	total_perfumeria = 0.0;
	precio_perfumeria = 0.0;
	media_perfumeria = 0.0;


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
		if (producto >= 300 && producto <= 450) {
			precio_perfumeria = precio;
			producto_perfumeria = producto;
			n_perf = n_perf + 1;
			total_perfumeria = total_perfumeria + precio_perfumeria;
		}

		n = n + 1;
		scanf("%d", &producto);


	}
	media = total / (float)n;
	media_perfumeria = total_perfumeria / (float)n_perf;

	printf("El importe total de la compra es: %f\n", total);
	printf("El precio medio de los productos es: %f\n", media);
	printf("El codigo del producto mas caro es: %d\n", producto_max);
	printf("La cantidad de puntos acumulados en la compra es: %f\n", total * PUNTOSxEUROS);
	printf("El importe total de la compra en perfumeria es: %f\n", total_perfumeria);
	printf("El precio medio de los productos en perfumeria es: %f\n", media_perfumeria);
	return 0;
}
