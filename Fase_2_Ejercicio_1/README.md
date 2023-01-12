# Introduccion_a_la_Algoritmia_II

Ejercicio 1 Construir un algoritmo que cuente los enteros positivos inferiores a 1000 que cumplan que sean múltiplos de nueve. Una manera de identificar si un número es múltiplo de nueve consiste en sumar los dígitos que componen el número a evaluar, tantas veces como haga falta hasta que nos encontremos con un número de un solo dígito. En ese momento podemos comprobar si ese número es el 9, y si lo es podremos concluir que el número analizado es efectivamente múltiplo de 9.

Por ejemplo, si analizamos el 729, lo que haremos inicialmente será sumar 7+2+9 que es igual a 18. Como que 18 es un número de mas de un dígito, repetimos el proceso sumando ahora 1 + 8. Como que su suma es igual a 9, podemos concluir que 729 es múltiplo de 9. Se requiere para realizar el ejercicio que los múltiplos de 9 se identifiquen de esta forma que se acaba de detallar. A partir del esqueleto del algoritmo siguiente, rellena pues las lineas de subrallado que indican que falta algo en esa linea de manera que el algoritmo siguiente resuelva el problema planteado.   

var     
    n, numero, contador : entero;         
    digitos : booleano;     
fvar       

{Pre: cierto }     

contador := ________________ ;     
n := 1;  

mientras  _______________  hacer  

    digitos := falso;

    si n < 10 entonces     
        si n = 9 entonces
            digitos := cierto;
        fsi     
    sino

      si n < 100 entonces     
           numero = ((n div 10 ) + (n mod 10));
           si numero > 9 entonces
               numero = ((numero div 10 ) + (numero mod 10));
           fsi
           si numero = 9 entonces
               digitos := cierto;
           fsi    
       sinó      

       si n < 1000 entonces      
       _________________
       _________________
       _________________
       _________________

       fsi    
      fsi   
    fsi     

    si digitos entonces           
       _________________
    fsi     

    n := n + 1;     

fmientras      

{Una vez hechos los cálculos, se imprimirán los resultados por pantalla.}      
{Post: contador contiene el número de enteros positivos inferiores a 1000, que cumplen que son múltiplos de nueve.}  

falgoritmo

Nótese que en el algoritmo anterior tiene que rellenar los cuadros con una única instrucción o expresión, a excepción de la rama alternativa del si ... sino, que puede estar constituida por una composición secuencial de acciones.
