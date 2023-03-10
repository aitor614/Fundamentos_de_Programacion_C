# AA5. Tipos estructurados de datos

Codificar, compilar y probar en lenguaje C del algoritmo siguiente:
Se requiere realizar un algoritmo que inicialmente mostrará un menú de selección de
opciones inicial que permitirá a partir de la opción seleccionada introducir nombres de curso
y los alumnos de este, listar los cursos introducidos indicando cuantos alumnos tiene cada
uno de ellos matriculados, o listar los alumnos de un curso determinado, borrar un curso
introducido junto con sus alumnos, o salir.

Dadas las siguientes definiciones de tipos:

tipo
  
  alumno =
      
      tupla
          
          DNI: tabla [10] de caracter;
          
          Nombre: tabla [20] de caracter;
          
          Apellido1: tabla [20] de caracter;
          
          Apellido2: tabla [20] de caracter;
          
          telefono: entero;
      
      ftupla

  curso =
      
      tupla
          
          Denominacion: tabla [20] de caracter;
          
          alumnos: tabla [30] de alumno;
          
          numero_alumnos_guardados: entero;
      
      ftupla

   
   escuela =
      
      tupla
          
          cursos: tabla[40] de curso;
          
          numero_cursos_guardados: entero;
      
      ftupla

ftipo

y el siguiente diseño que resuelve el problema planteado:

{Pre: En el canal estándar de salida se visualiza un menú de selección y el canal estándar
de entrada se escribe el número 1 si se va a introducir un nuevo curso y los alumnos de
este, un 2 en caso de querer listar los cursos introducidos, así como el número de alumnos
de este, un 3 en caso de querer listar los alumnos de un curso introducido, un 4 en caso de
querer borrar un curso junto con sus alumnos. Para salir se escribe cualquier otro número o
símbolo.}

algoritmo tratamientoEscuela
  
  var
      
      e: escuela
      
      o: entero;
  
  fvar
  

  inicializar_escuela(e);
  
  o:= menu();
  
  mientras o >=1 y o <=4 hacer
      
      si o =1 hacer
          
          introducir_curso(e);
      
      fsi
      
      si o =2 hacer
          
          listar_curso(e);
      
      fsi
      
      si o =3 hacer
          
          listar_alumnos_curso(e);
      
      fsi
      
      si o =4 hacer
          
          borrar_curso(e);
      
      fsi
      
      o:= menu();
   
   fmientras

falgoritmo

{Post: En el canal estándar de salida se muestran los datos requeridos en caso de querer
introducir un nuevo curso y por el canal estándar de entrada se introducen, o se listan por el
canal estándar de salida los datos de todos los cursos y alumnos introducidos por curso,
dependiendo de la opción escogida.}

accion inicializar_escuela ( ent/sal escuela: e)
    
    e.numero_cursos_guardados := 0;

facción

funcion menu(): entero
    
    op: entero;
    
    escribirCadena("****************************************************************");
    
    escribirCadena("Teclea el numero de la opcion escogida o cualquier otro numero
    para salir:");
    
    escribirCadena("1. Introducir curso y alumnos del curso.");
    
    escribirCadena("2. Listar cursos introducidos.");
    
    escribirCadena("3. Listar alumnos de un curso determinado.");
    
    escribirCadena("4. Borrar curso y alumnos.");
    
    escribirCadena("******************************************************************");
    
    op:=leerEntero();
    
    retorna op;

ffuncion

accion introducir_curso( ent/sal e: escuela)
    
    si (e.numero_cursos_guardados < 40) hacer
        
        c: curso;
        
        p: entero;
        
        c.numero_alumnos_guardados=0;
        
        escribirCadena("Teclea el nombre del curso");
        
        c.denominacion:=leerCadena();
        
        escribirCadena("Vas a introducir un nuevo alumno? Teclea 1 si es que si, o
        
        0 si es que no.”);
        
        p:=leerEntero();
        
        mientras p=1 hacer
        
        a: alumno;
        
        escribirCadenaC);
        
        a.DNI:=leerCadena();
        
        escribirCadena("Teclea el nombre del alumno");
        
        a.nombre:=leerCadena();
        
        escribirCadena("Teclea el primer apellido del alumno");
        
        a.apellido1:=leerCadena();
        
        escribirCadena("Teclea el segundo apellido del alumno");
        
        a.apellido2:=leerCadena();
        
        escribirCadena("Teclea el primer telefono del alumno");
        
        a.telefono:=leerEntero();
        
        c.alumnos[c.numero_alumnos_guardados+1]:=a;
        
        c.numero_alumnos_guardados:= c.numero_alumnos_guardados+1;
        
        escribirCadena("Vas a introducir un nuevo alumno? Teclea 1 si es que
        si, o si es que no.”);
        
        p:=leerEntero();
        
        fmientras
        
        e.cursos[e.numero_cursos_guardados+1] = c;
        
        e.numero_cursos_guardados = e.numero_cursos_guardados + 1;
    
    fsi

facción

accion listar_cursos( ent e: escuela )
    
    i: entero;
    
    para i:=1 hasta e.numero_cursos_guardados hacer
        
        escribirCadena(e.cursos[i].denominacion);
        
        escribirCadena(“Se han guardado”);
        
        escribirEntero(e.cursos[i].numero_alumnos_guardados);
    
    fpara

facción

accion listar_alumnos_curso(ent e: escuela )
    
    i, c: entero;
    
    si e.numero_cursos_guardados =0 hacer
        
        escribirCadena(“No hay cursos guardados”);
    
    sino
        
        escribirCadena(“Indica por su número de los siguientes cursos de cual quieres
        listar sus alumnos”);
        
        para i:=1 hasta e.numero_cursos_guardados hacer
            
            escribirEntero(i);
            
            escribirCadena(“. “);
            
            escribirCadena(e.cursos[i].denominacion);
        
        fpara
        
        c:=leerEntero();
        
        mientras c<1 o c>e.numero_cursos_guardados hacer
            
            escribirCadena(“Numero incorrecto. Indica un numero de entre los
            siguientes.“);
            
            para i:=1 hasta e.numero_cursos_guardados hacer
                
                escribirEntero(i);
                
                escribirCadena(“. “);
                
                escribirCadena(e.cursos[i].denominacion);
            
            fpara
            
            c:=leerEntero();
        
        fmientras
        
        escribirCadena(“Sus alumnos son “);
        
        escribirEntero(e.cursos[c].numero_alumnos_guardados);
        
        para i:=1 hasta e.cursos[c].numero_alumnos_guardados hacer
            
            escribirCadena(“DNI: “);
            
            escribirCadena(e.cursos[c].alumnos[i].DNI);
            
            escribirCadena(“Nombre: “);
            
            escribirCadena(e.cursos[c].alumnos[i].Nombre);
            
            escribirCadena(“Apellido1: “);
            
            escribirCadena(e.cursos[c].alumnos[i].Apellido1);
            
            escribirCadena(“Apellido2: “);
            
            escribirCadena(e.cursos[c].alumnos[i].Apellido2);
            
            escribirCadena(“Telefono: “);
            
            escribirEntero(e.cursos[c].alumnos[i].telefono);
         
         fpara
     
     fsi

facción

accion borrar_curso(ent/sal e: escuela )
    
    i, numero: entero;
    
    escribirCadena(“Indica por su número de los siguientes cursos de cual quieres borrar
    junto con sus alumnos”);
    
    para i:=1 hasta e.numero_cursos_guardados hacer
    
    escribirEntero(i);
    
    escribirCadena(“. “);
    
    escribirCadena(e.cursos[i].denominacion);
    
    fpara
    
    numero:=leerEntero();
    
    si numero > 0 y numero<=e.numero_cursos_guardados hacer
        
        mientras numero < e.numero_cursos_guardados hacer
        
        e.cursos[numero]:= e.cursos[numero+1];
        
        numero:=numero+1;
        
        fmientras
        
        e.numero_cursos_guardados:= e.numero_cursos_guardados-1;
    
    fsi

facción
