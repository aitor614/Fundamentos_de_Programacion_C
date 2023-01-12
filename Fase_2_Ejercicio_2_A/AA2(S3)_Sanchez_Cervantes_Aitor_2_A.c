#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void)
{
    //Declaración de variables
    int a, b, mayor, menor, i;
    mayor = 0;
    menor = 0;

    //Demandamos los datos al usuario
    printf("Introduce el primer numero entero:\n");
    scanf("%d", &a);
    printf("Introduce el segundo numero entero:\n");
    scanf("%d", &b);

    //Determinamos cual de los dos es mayor y printamos el mayor seguido del menor indicando cual es cual
    
        if (a > b) {
                mayor = a;
                menor = b;
                printf("El numero %d es mayor que el numero %d ", mayor, menor);
            } 
        if (a < b) {
            mayor = b;
            menor = a;
            printf("El numero %d es mayor que el numero %d ", mayor, menor);
        }
        if (a == b) {
            printf("Los numeros son iguales \n");
        exit (-1);
        }

        //Printamos los números enteros en orden comprendidos entre el menor y el mayor determinados en el punto anterior
        printf("\n\nLos numeros enteros comprendidos entre %d y %d son:\n", menor, mayor);

        for (i = menor +1; (i > menor) && (i < mayor); i++) {
           printf("%d " , i );
        }
        printf("\n\n");
        system("pause");

    return 0;
}