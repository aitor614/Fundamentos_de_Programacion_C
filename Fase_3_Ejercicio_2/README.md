# Tratamiento_de_Secuencias_I

Codifica el algoritmo en lenguaje C:
El siguiente algoritmo toma los datos de una secuencia de números enteros positivos
finalizando con un valor -1. Para cada uno de estos números el algoritmo intenta encontrar
todos los tríos de sus divisores diferentes del 1 que multiplicados sean igual al propio
número analizado. En caso de existir al menos un trío de sus divisores que multiplicados
sean igual al número analizado, se imprime un mensaje de éxito en el que se muestra el
número original junto con los tres divisores que cumplen lo expuesto. Para determinar los
tríos se puede multiplicar un divisor por el mismo las veces como sea necesario. En caso de
que el número analizado no tenga tres divisores que multiplicados sean igual él, se imprime
un mensaje de error.
Algunos números que cumplen lo que se enuncia son por ejemplo el 54 que como ves tiene
2 tríos:

Introduce un numero o 0 para salir.

54


**********************************************************************************
El numero: 54 tiene los siguientes 3 divisores que multiplicados son iguales a el:

Divisor 1: 2

Divisor 2: 3

Divisor 3: 9

54 = 2 * 3 * 9


Y estos otros:

Divisor 1: 3

Divisor 2: 3

Divisor3: 6

54 = 3 * 3 * 6

Mientras que, si un número no cumple con lo enunciado, como pasa con el 55, veremos una
salida como la que te muestro:

Introduce un numero o 0 para salir.

55


El numero 55 no tiene 3 divisores que multiplicados sean igual a el

algoritmo BuscaDivisoresMultiplicadosIgualesNumero

  var
  
    num: entero;
  
  fvar
  
  escribirCadena(‘Introduce un número: o -1 para salir.‘);
  
  num := leerEntero( );
  
  mientras (num ≠ -1) hacer
  
    buscadivisor1(num);
  
  escribirCadena(‘Introduce un número: o -1 para salir.‘);
  
    num := leerEntero ( );
  
  fmientras

falgoritmo


accion printaExito( ent a: entero, ent b: entero, ent c: entero, ent d: entero, ent exito:
boleano )

  si no exito entonces

    escribirCadena(‘El número: ‘);

    escribirEntero(a);

    escribirCadena(‘tiene 3 divisores que son iguales a él: ‘);

  sino

    escribirCadena(‘Y estos otros: ‘);

  fsi

  escribirCadena(‘Divisor 1: ‘);

  escribirEntero(b);

  escribirCadena(‘Divisor 2: ‘);

  escribirEntero(c);

  escribirCadena(‘Divisor 3: ‘);

  escribirEntero(d);

faccion


accion printaFracaso( ent a: entero)

  escribirCadena(‘El número: ‘);

  escribirEntero(a);

  escribirCadena(‘ no tiene tres divisores que multiplicados sean igual a el. ‘);

faccion


funcion loEs(ent x: entero,ent y:entero,ent z: entero, ent w: entero): booleano;

  retorna x = (y * z * w);

ffuncion


accion buscadivisor1( ent n: entero)
  
  var
  
    encontrado, exito: booleano;
  
    d1, d2, d3: entero;
  
  fvar
  
  encontrado:=falso;
  
  exito:=falso;
  
  d1:=2;
  
  d2 :=2;
  
  d3 :=2;
  
  mientras d1<=(n div 2) hacer
  
    buscadivisor2 (n, d1, d2, d3, exito);
  
    d1:= d1+1;
  
  fmientras
  
  si no exito entonces
  
    printaFracaso(n);
  
  sino
  
    escribirCadena(‘********************************************‘);
  
  fsi

faccion
  
  
accion buscadivisor2( ent num: entero, ent d1: entero, entsal d2: entero, entsal d3:
  
  entero, entsal exito: boleano)
  
  var
  
    encontrado: booleano;
  
  fvar
  
  encontrado:=falso;
  
  d2:=d1;
  
  d3:=d1;
  
  mientras d2<=(num div 2) y no encontrado hacer
  
    buscadivisor3 (num,d1,d2,d3,exito);
  
    encontrado:= loEs(num,d1,d2,d3);
  
    si no encontrado entonces
  
      d2:= d2+1;
  
    fsi
  
  fmientras

faccion


accion buscadivisor3( ent num: entero, ent d1: entero, ent d2: entero, entsal d3: entero,
entsal exito: boleano)
  
  var
  
    encontrado: booleano;
  
  fvar
  
  encontrado:=falso;
  
  d3:=d2;
  
  mientras d3<=(num div 2) hacer
  
    encontrado:= loEs(num,d1,d2,d3);
  
    si encontrado entonces
  
      printaExito(num, d1,d2,d3 exito);
  
      éxito:=cierto;
  
    fsi
  
    d3:= d3+1;

  fmientras

faccion
