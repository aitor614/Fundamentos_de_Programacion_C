# Tratamiento_de_Secuencias_I

Codifica una aplicación programada en C que permita la introducción por
parte del usuario de un 10 números enteros como máximo, que serán almacenados a
medida que se van introduciendo en un array de enteros, de forma que finalizará la
introducción de estos o bien cuando el usuario teclee un -1 o bien cuando se llegue al tope
de la capacidad del array. Supongamos se han introducido los siguientes números:

Introduce el entero numero 1: 1

Introduce el entero numero 2: 9

Introduce el entero numero 3: 2

Introduce el entero numero 4: 8

Introduce el entero numero 5: 3

Introduce el entero numero 6: 7

Introduce el entero numero 7: 4

Introduce el entero numero 8: 6

Introduce el entero numero 9: 5

Introduce el entero numero 10: 10

Y como ves se ha detenido la introducción porque se ha llegado al máximo que como
hemos dicho es de 10 números. En este momento se muestran los números que se han
introducido, y en que posición del array se encuentran cada uno de estos:

-Se han introducido 10 numeros.

***************FUNCION QUE MUESTRA LOS NUMEROS INTRODUCIDOS:***************

Los numros introducidos son:

Introduce el entero numero 1: 1

Introduce el entero numero 2: 9

Introduce el entero numero 3: 2

Introduce el entero numero 4: 8

Introduce el entero numero 5: 3

Introduce el entero numero 6: 7

Introduce el entero numero 7: 4

Introduce el entero numero 8: 6

Introduce el entero numero 9: 5

Introduce el entero numero 10: 10

A continuación, se muestran tanto la suma como la media de los números introducidos, pero
como ves del array únicamente se muestran los que están por encima de la media junto con
la posición en la que estos se encuentran en este:

La suma de los numeros introducidos es 55

Y la media de estos es 5.500000

***************FUNCION QUE MUESTRA LOS NUMEROS INTRODUCIDOS QUE ESTAN POR ENCIMA DE LA MEDIA:***************

Numero en posicion 2: 9 por encima de la media

Numero en posicion 4: 8 por encima de la media

Numero en posicion 6: 7 por encima de la media

Numero en posicion 8: 6 por encima de la media

Numero en posicion 10: 10 por encima de la media

Ahora se le pregunta al usuario que indique la tolerancia. Como puedes ver en la siguiente
captura se ha indicado 0.3 como tolerancia:

Indica cual es la tolerancia respecto a la media?
0.3

***************FUNCION QUE A PARTIR DE LA TOLERANCIA INTRODUCE LO NECESARIO EN UN SEGUNDO ARRAY:***************

***************Introduce los valores cokmprendidos entre 3.850000 y 7.150000****************

***************FUNCION QUE MUESTRA LOS NUMEROS INTRODUCIDOS EN AMBOS ARRAYS:****************

Numero 1: 1 Segundo array 1: 0

Numero 2: 9 Segundo array 2: 0

Numero 3: 2 Segundo array 3: 0

Numero 4: 8 Segundo array 4: 0

Numero 5: 3 Segundo array 5: 0

Numero 6: 7 Segundo array 6: 7

Numero 7: 4 Segundo array 7: 4

Numero 8: 6 Segundo array 8: 6

Numero 9: 5 Segundo array 9: 5

Numero 10: 10 Segundo array 10: 0

Y tal como se aprecia, primero se indica entre que valores se cumple con la tolerancia
introducida, y acto seguido se copian en un segundo array los valores que están
comprendidos entre la media mas/menos la tolerancia indicada anteriormente en tanto por
uno, y se muestran. Si en una posición del array inicial el valor introducido no cumple con la
tolerancia, se copia un 0 en esa posición del segundo array. Si la cumplen, se copia el
propio valor.
En caso que se teclee un -1 antes de llegar a introducir los 10 enteros se ha de parar con la
introducción de estos y se han de realizar los cálculos correctamente. En la siguiente
captura puedes ver un ejemplo de esto:

Introduce el entero numero 1: 1

Introduce el entero numero 2: 2

Introduce el entero numero 3: 3

Introduce el entero numero 4: 4

Introduce el entero numero 5: -1

- Se han introducido 4 numeros.

****************FUNCION QUE MUESTRA LOS NUMEROS INTRODUCIOS:****************

Los numeros Introducidos son:

Numero 1: 1

Numero 2: 2

Numero 3: 3

Numero 4: 4

La suma de los numeros Introducidos es 18

Y la media de estos es 2.500000

****************FUNCION QUE MUESTRA LOS NUMEROS INTRODUCIOS QUE ESTAN POR ENCIMA DE LA MEDIA:****************

Numero en posicin 3: 3 por encima de la media

Numero en posiciln 4: 4 por encima de la media

Indica cual es la tolerancia respecto a la media?
0.5

****************FUNCION QUE A PARTIR DE LA TOLERANCIA INTRODUCE LO NECESARIO EN UN SEGUNDO ARRAY:****************

****************Introduce valores comprendidos entre 1.250000 y 3.750000*****************

****************FUNCION QUE MUESTRA LOS NUMEROS INTRODUCIOS EN AMBOS ARRAYS:****************

Numero 1: 1 Segundo array 1; e

Numero 2: 2 Segundo array 2; 2

Numero 3: 3 Segundo array 3: 3

Numero 4: 4 Segundo array 4: 0

Se pide además que se creen y usen diversas funciones que realicen lo siguiente (una
función por cada funcionalidad indicada):
-Imprima los números introducidos en el array original junto con la posición en la que estos
están guardados.
-Imprima los números introducidos en el array original junto con la posición en la que están
guardados si se encuentran por encima de la media.
-Requiera al usuario la tolerancia a aplicar.
-Muestre los valores de tolerancia e introduzca en un segundo array posición a posición un
0 si el valor no cumple con la tolerancia, y el propio valor si la cumple.
-Imprima los dos arrays posición a posición de forma que se pueda ver lo realizado en el
punto anterior.




