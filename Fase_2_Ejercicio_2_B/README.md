# Introduccion_a_la_Algoritmia_Ejercicio_2_B



B. Indicación: Se pide usar un solo bucle y sumar, y por tanto no multiplicar tanto para determinar el resultado de las multiplicaciones entre los dos números introducidos por el usuario como si es correcto el resultado la multiplicación. A parte de las indicaciones que encontrarás en el propio código te muestro una captura en la que se han introducido el 5, el 7 y el 35:

Introduce un primer numero del 1 al 10:
5
Introduce un segundo numero del 1 al 10:
7
Cuanto crees que es el resultado de multiplicar 5 por 7?
35

5 multiplicado po 0 es igual a 0
5 multiplicado po 1 es igual a 5
5 multiplicado po 2 es igual a 10
5 multiplicado po 3 es igual a 15
5 multiplicado po 4 es igual a 20
5 multiplicado po 5 es igual a 25
5 multiplicado po 6 es igual a 30
5 multiplicado po 7 es igual a 35
5 multiplicado po 8 es igual a 40
5 multiplicado po 9 es igual a 45
5 multiplicado po 10 es igual a 50
5 multiplicado por 7 es efectivamente igual a 35


Y esta otra captura en la que se han introducido el 7, el 5 y el 36:


Introduce un primer numero del 1 al 10:
7
Introduce un segundo numero del 1 al 10:
5
Cuanto crees que es el resultado de multiplicar 5 por 7?
36

7 multiplicado po 0 es igual a 0
7 multiplicado po 1 es igual a 7
7 multiplicado po 2 es igual a 14
7 multiplicado po 3 es igual a 21
7 multiplicado po 4 es igual a 28
7 multiplicado po 5 es igual a 35
7 multiplicado po 6 es igual a 42
7 multiplicado po 7 es igual a 49
7 multiplicado po 8 es igual a 56
7 multiplicado po 9 es igual a 63
7 multiplicado po 10 es igual a 70
7 multiplicado por 5 no es igual a 36, como has indicado.


Para simplificar consideraremos que siempre se introducen dos números enteros comprendidos entre el 1 y el 10. Se han de usar todas las variables que aparecen en la declaración.
 

        #define _CRT_SECURE_NO_WARNINGS

        //Likamos las librerías
        #include <stdio.h>
        #include <stdbool.h>


        int main(void)
        {
            //Declaración de variables
            int a, b, axb_usuario, axb, i, correcto=false, resultado;

            //Demandamos los datos al usuario
            printf("Introduce un primer numero del 1 al 10:\n");
            scanf("%d", &a);

            printf("Introduce un segundo numero del 1 al 10:\n");
            scanf("%d", &b);

            printf("Cuanto crees que es el resultado de multiplicar %d por %d?\n",a,b);
            scanf("%d", &axb_usuario);


            //Se ha de determinar cual es el resultado de multiplicar a * b mediante un bucle en el que se vaya sumando, no multiplicando a por b.

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            _____________________________________________________

            

            printf("\n\n");


            system("pause");

            return 0;
       }
