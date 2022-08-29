#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    for (int i = 1; i < 11; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("@");
        }
        printf("\n");
    }
    
}

