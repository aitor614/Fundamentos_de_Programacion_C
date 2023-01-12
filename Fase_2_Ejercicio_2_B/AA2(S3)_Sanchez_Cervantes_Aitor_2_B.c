#define _CRT_SECURE_NO_WARNINGS

//Likamos las librerías
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    //Declaración de variables
    int a, b, axb_usuario, axb, i, correcto = false, resultado;
    axb = 0;
    resultado = 0;
    //Demandamos los datos al usuario
    printf("Introduce un primer numero del 1 al 10:\n");
    scanf("%d", &a);

    printf("Introduce un segundo numero del 1 al 10:\n");
    scanf("%d", &b);

    printf("Cuanto crees que es el resultado de multiplicar %d por %d?\n", a, b);
    scanf("%d", &axb_usuario);


    //Se ha de determinar cual es el resultado de multiplicar a * b mediante un bucle en el que se vaya sumando, no multiplicando a por b.

    for (i = 0; (i >= 0) && (i <= 10); i++) {
        
        printf("%d multiplicado por %d es igual a %d\n", a, i, axb);
        axb = axb + a;
        if ((b == (i + 1) ) && (axb == axb_usuario)) {
            correcto = true;
        }
            resultado = axb_usuario;

    }
    if (correcto == true) {
        printf("%d multiplicado por %d es efectivamente igual a %d", a, b, resultado);
    }
    else {
        printf("%d multiplicado por %d no es igual a %d, como has indicado.", a, b, resultado);
    }

    printf("\n\n");


    system("pause");

    return 0;
}