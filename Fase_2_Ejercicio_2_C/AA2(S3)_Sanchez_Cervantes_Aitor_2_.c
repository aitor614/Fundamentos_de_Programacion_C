#define _CRT_SECURE_NO_WARNINGS

//Likamos las librerías
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    //Declaración de variables
    int a, n, i, contadorPrimo, primo = true;
    
    
    //Demandamos los datos al usuario
    printf("Introduce un numero:\n");
    scanf("%d", &a);


    //Determinamos si el número es o no primo, en caso que no lo sea, printaremos sus divisores.
    contadorPrimo = 0;
    i = 2;
    
    while ((i >= 2) && (i < a)) {
        primo = false;
        n = a % i;

        if (n == 0) {
            primo = true;
            
            if (contadorPrimo == 0) {
                printf("El numero %d no es primo y sus divisores son: ", a);
            }
            contadorPrimo++;

            printf("%d ", i);
        }

        i = i + 1;
     }
    if (contadorPrimo > 0) {
        printf("\n");
    }
   else {
        printf("El numero %d es primo.\n", a);   
        }
     system("pause");

return 0;
}