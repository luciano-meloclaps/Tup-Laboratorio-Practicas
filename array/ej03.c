#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h>

void main()
{
    int cadenaIng[5];
    int acumuladorNum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Asiganar valores al array: ");
        scanf("%i", &cadenaIng[i]);
        if (cadenaIng[i] == 5)
        {
            acumuladorNum = 1 + acumuladorNum; 
        }
    }
    printf("Acumulador: %i", acumuladorNum);
}