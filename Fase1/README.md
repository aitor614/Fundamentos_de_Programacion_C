# AA1.-Introduccion-a-la-algoritmica-I

Considerar el siguiente algoritmo:
 

algoritmo euros

 

const

    PUNTOSxEURO: real = 0.25;

fconst

 

var

    producto, producto_max,n: entero;

    precio, precio_max, total, media: real;

fvar

 

{Pre: En la entrada estándar hay una secuencia de la forma:

c0 p0 c1 p1 c2 p2 c3 p3 ... cN-1 pN-1 0

siendo N> 0, que representa una lista de la compra de un supermercado, donde:

ci> 0 es un entero que representa un código de producto,

pi> 0.0 es un número real que representa el precio del producto en euros.

El código es propio del producto, y no puede aparecer repetido en la secuencia.

El código 0 será la marca de fin de secuencia.}

 

total := 0.0;

media := 0.0;

precio_max := 0.0;

producto_max := 0;

producto := leerEntero();

n:=0;

 

mientras ( producto > 0 ) hacer

    precio := leerReal();

    total:= total + precio;

    si precio > precio_max entonces

        precio_max := precio;

        producto_max := producto;

    fsi

    n:=n+1;

    producto := leerEntero();

fmientras

 

media:=total / enreroAReal(n);

 

escribirReal( total );

escribirReal( media );

escribirEntero( producto_max );

escribirReal( PUNTOSxEURO * total ); 

 

{Post: Se ha escrito por la salida estándar del importe total de la compra en euros, la media en importe de los productos de la compra, el código del producto más caro y la cantidad de puntos acumulados por la compra}

 

falgoritmo

 


a) Codificar, compilar y probar en lenguaje C el algoritmo dado.

b) Modificar el algoritmo para conocer el gasto realizado en productos de la
sección de perfumería. Sabiendo que este tipo de productos tienen códigos
comprendidos entre el 300 y el 450, efectuar las modificaciones necesarias para
acumular, en la nueva variable total_perfumeria, el gasto efectuado en esta
sección. Queremos saber también
