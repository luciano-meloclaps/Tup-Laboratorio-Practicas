#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h>  // Libreria que permite hacer uso de la funcion system
#include <math.h>

// Escriba un programa que pida ingresar un número y a continuación
// escriba en la consola si el mismo es par o impar.

int printNum(int num);

int main()
{
    int numIngresado;

    printf("Ingrese un numero entero: ");
    scanf("%i", &numIngresado);

    printNum(numIngresado);
}

int printNum(int num)
{
    if (num % 2 == 0)
    {
        printf("El numero es PAR");
    }
    else
    {
        printf("El numero es IMPAR");
    }
    return num;
}
