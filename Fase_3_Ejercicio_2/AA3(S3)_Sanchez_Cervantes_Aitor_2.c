#define _CRT_SECURE_NO_WARNINGS
//Linkamos las librerías
#include <stdio.h>
#include <stdbool.h>



void printaExito(int a, int b, int c, int d, bool exito);
void printaFracaso(int a);
bool loEs(int x, int y, int z, int w);
void buscadivisor1(int num);
void buscadivisor2(int num, int d1, int* d2, int* d3, bool* exito);
void buscardivisor3(int num, int d1, int d2, int* d3, bool* exito);

int main() {

    //Declaracion de variables
    int num;

    printf("Introduce un numero: o -1 para salir.\n");
    scanf("%d", &num);

    while (num != -1) {
        buscadivisor1(num);

        printf("Introduce un numero: o -1 para salir.\n");
        scanf("%d", &num);
    }



    printf("\n\n");

    system("pause");

    return 0;
}

void printaExito(int a, int b, int c, int d, bool exito) {

    if (exito == false) {
        printf("\n");
        printf("********************************************\n");
        printf("El numero ");
        printf("%d ", a);
        printf("tiene los siguientes 3 divisores que multiplicados son  iguales a el:");
    }
    else {
        printf("\nY estos otros:");
    }
    printf("\nDivisor 1: ");
    printf("%d\n", b);
    printf("Divisor 2: ");
    printf("%d\n", c);
    printf("Divisor 3: ");
    printf("%d\n", d);
    printf("%d = %d * %d * %d \n", a, b, c, d);

}

void printaFracaso(int a) {
    printf("\n");
    printf("El numero: ");
    printf("%d ", a);
    printf("no tiene tres divisores que multiplicados sean igual a el:\n\n");
}

bool loEs(int x, int y, int z, int w) {
    return x == (y * z * w);
}

void buscadivisor1(int n) {
    //Declaramos variables
    bool encontrado, exito;
    int d1, d2, d3;

    //Inicializamos las variables
    encontrado = false;
    exito = false;
    d1 = 2;
    d2 = 2;
    d3 = 2;

    while (d1 <= (n / 2)) {
        buscadivisor2(n, d1, &d2, &d3, &exito);
        d1 = d1 + 1;
    }
    if (exito == false) {
        printaFracaso(n);
    }
    else {
        printf("********************************************\n");
    }
}

void buscadivisor2(int num, int d1, int* d2, int* d3, bool* exito) {
    //Declaracion de variables
    bool encontrado;

    //Inicializamos las variables
    encontrado = false;
    *d2 = d1;
    *d3 = d1;

    while (*d2 <= (num / 2) && (encontrado == false)) {
        buscardivisor3(num, d1, *d2, d3, exito);
        encontrado = loEs(num, d1, *d2, *d3);

        if (encontrado == false) {
            *d2 = *d2 + 1;
        }
    }
}

void buscardivisor3(int num, int d1, int d2, int* d3, bool* exito) {
    //Declaracion de variables
    bool encontrado;

    //Inicializamos las variables
    encontrado = false;
    *d3 = d2;

    while (*d3 <= (num / 2)) {
        encontrado = loEs(num, d1, d2, *d3);

        if (encontrado) {
            printaExito(num, d1, d2, *d3, *exito);
            *exito = true;
        }
        *d3 = *d3 + 1;
    }
}

