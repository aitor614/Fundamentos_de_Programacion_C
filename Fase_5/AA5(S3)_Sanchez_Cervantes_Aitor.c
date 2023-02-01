#define _CRT_SECURE_NO_WARNINGS

//Linkamos las librerías
#include <stdio.h>
#include <stdbool.h>

// Tuplas
typedef struct {
	char DNI[10];
	char nombre[20];
	char apellido1[20];
	char apellido2[20];
	int telefono;
} alumno;

typedef struct {
	char denominacion[20];
	alumno alumnos[30];
	int numero_alumnos_guardados;
} curso;

typedef struct {
	curso cursos[40];
	int numero_cursos_guardados;
} escuela;

void inicializar_escuela(escuela*);
void introducir_curso(escuela* e);
void listar_cursos(escuela e);
void listar_alumnos_curso(escuela e);
void borrar_curso(escuela* e);

int main(void) {

	//Declaración de Variables
	escuela  e;
	int o;

	//Inicializamos variables
	inicializar_escuela(&e);
	o = menu();

	while ((o >= 1) && (o <= 4)) {
		if (o == 1) {
			introducir_curso(&e);
		}
		if (o == 2) {
			listar_cursos(e);
		}
		if (o == 3) {
			listar_alumnos_curso(e);
		}
		if (o == 4) {
			borrar_curso(&e);
		}
		o = menu();
	}


	printf("\n\n");

	system("pause");

	return 0;

}

//Funciones

void inicializar_escuela(escuela* e) {
	e->numero_cursos_guardados = 0;
}

int menu() {
	int op;
	printf("****************************************************************\n");
	printf("Teclea el numero de la opcion escogida o cualquier otro numero para salir:\n");
	printf("1. Introducir curso y alumnos del curso.\n");
	printf("2. Listar cursos introducidos.\n");
	printf("3. Listar alumnos de un curso determinado.\n");
	printf("4. Borrar curso y alumnos.\n");
	printf("******************************************************************\n");
	scanf("%d", &op);
	printf("\n");
	return op;

}

void introducir_curso(escuela* e) {
	if (e->numero_cursos_guardados < 40) {
		curso c;
		int p;
		c.numero_alumnos_guardados = 0;

		printf("Teclea el nombre del curso\n");
		scanf("%s", c.denominacion);
		printf("\n");

		printf("Vas a introducir un nuevo alumno? Teclea 1 si es que si, o 0 si es que no.\n");
		scanf("%d", &p);
		printf("\n");

		while (p == 1) {
			alumno a;
			printf("Teclea el nombre del alumno\n");
			scanf("%s", a.nombre);
			printf("\n");

			printf("Teclea el primer apellido del alumno\n");
			scanf("%s", a.apellido1);
			printf("\n");

			printf("Teclea el segundo apellido del alumno\n");
			scanf("%s", a.apellido2);
			printf("\n");

			printf("Teclea el DNI del alumno\n");
			scanf("%s", a.DNI);
			printf("\n");

			printf("Teclea el primer telefono del alumno\n");
			scanf("%d", &a.telefono);
			printf("\n");

			c.alumnos[c.numero_alumnos_guardados + 1] = a;
			c.numero_alumnos_guardados = c.numero_alumnos_guardados + 1;

			printf("Vas a introducir un nuevo alumno? Teclea 1 si es que si, o si es que no.\n");
			scanf("%d", &p);
			printf("\n");
		}

		e->cursos[e->numero_cursos_guardados + 1] = c;
		e->numero_cursos_guardados = e->numero_cursos_guardados + 1;
	}
}

void listar_cursos(escuela e) {
	int i;

	for (i = 1; i <= e.numero_cursos_guardados; i++) {
		printf("%s\n", e.cursos[i].denominacion);
		printf("Se han guardado ");
		printf("%d\n\n", e.cursos[i].numero_alumnos_guardados);
	}
}

void listar_alumnos_curso(escuela e) {
	int i, c;

	if (e.numero_cursos_guardados == 0) {
		printf("No hay cursos guardados\n");
	}
	else {
		printf("Indica por su número de los siguientes cursos de cual quieres listar sus alumnos\n");

		for (i = 1; i <= e.numero_cursos_guardados; i++) {
			printf("%d", i);
			printf(". ");
			printf("%s\n", e.cursos[i].denominacion);
		}
		scanf("%d", &c);

		while ((c < 1) || (c > e.numero_cursos_guardados)) {
			printf("Numero incorrecto.Indica un numero de entre los siguientes.\n");

			for (i = 1; i <= e.numero_cursos_guardados; i++) {
				printf("%d", i);
				printf(". ");
				printf("%s\n", e.cursos[i].denominacion);
			}
			scanf("%d", &c);
		}
		printf("Sus alumnos son ");
		printf("%d", e.cursos[c].numero_alumnos_guardados);
		printf("\n");

		for (i = 1; i <= e.cursos[c].numero_alumnos_guardados; i++) {
			printf("DNI: ");
			printf("%s\n", e.cursos[c].alumnos[i].DNI);
			printf("Nombre: ");
			printf("%s\n", e.cursos[c].alumnos[i].nombre);
			printf("Apellido1: ");
			printf("%s\n", e.cursos[c].alumnos[i].apellido1);
			printf("Apellido2: ");
			printf("%s\n", e.cursos[c].alumnos[i].apellido2);
			printf("Telefono: ");
			printf("%d\n", e.cursos[c].alumnos[i].telefono);
			printf("\n");
		}
	}
}

void borrar_curso(escuela* e) {
	int i, numero;

	printf("Indica por su número de los siguientes cursos de cual quieres borrar junto con sus alumnos\n");

	for (i = 1; i <= e->numero_cursos_guardados; i++) {
		printf("%d", i);
		printf(".");
		printf("%s\n", e->cursos[i].denominacion);
	}
	scanf("%d", &numero);

	if ((numero > 0) && (numero <= e->numero_cursos_guardados)) {
		while (numero < e->numero_cursos_guardados) {
			e->cursos[numero] = e->cursos[numero + 1];
			numero = numero + 1;
		}
		e->numero_cursos_guardados = e->numero_cursos_guardados - 1;
	}
}
