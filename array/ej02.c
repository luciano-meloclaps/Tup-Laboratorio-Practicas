#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    int arrayNumber[5] = {1, 3, 5, 7, 9};
    int sumaArray = 0;
    float promedioArray = 0;

    for (int i = 0; i < 5; i++)
    {
        sumaArray = sumaArray + arrayNumber[i];
    }
    printf("La suma es: %i", sumaArray);
    promedioArray = sumaArray / 5;
    printf("\vEl promedio es: %f", promedioArray);
}