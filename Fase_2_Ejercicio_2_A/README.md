# Introduccion_a_la_Algoritmia_II_Ejercicio_2_A
Considerar las siguientes aplicaciones programadas en C incompletas. Rellena con código los espacios destinados a ello de forma que implementen la funcionalidad que se deduce de los comentarios que puedes encontrar dentro del propio código:
 

A. A parte de las indicaciones que encontrarás en el propio código te muestro una captura en la que se han introducido el 10 y el 5:

Introduce el primer numero entero:
10
Introduce el segundo numero entero:
5
El numero 10 es mayor que el numero 5.
Los numeros enteros comprendidos entre 5 y 10 son:
6 7 8 y 9
Presiona una tecla para continuar...
 

Para simplificar consideraremos que siempre se introducen dos números enteros distintos. Se han de usar todas las variables que aparecen en la declaración.

 

        

        #define _CRT_SECURE_NO_WARNINGS

        #include <stdio.h>


        int main(void)
        {
            //Declaración de variables
            int a, b, mayor, menor, i;

            //Demandamos los datos al usuario
            printf("Introduce el primer numero entero:\n");
            scanf("%d", &a);
            printf("Introduce el segundo numero entero:\n");
            scanf("%d", &b);

            //Determinamos cual de los dos es mayor y printamos el mayor seguido del menor indicando cual es cual

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

 

            //Printamos los números enteros en orden comprendidos entre el menor y el mayor determinados en el punto anterior
            printf("\n\nLos numeros enteros comprendidos entre %d y %d son:\n", menor, mayor);

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            system("pause");

            return 0;
        }
