#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h>

void main()
{
    int vector[6] = {10, 20, 5, 15, 30, 20};
    int sumaVector = 0;
    int numMayor = 0;
    int numAcumulador = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Numero de array N: %i \n",  vector[i]);
        sumaVector = sumaVector + vector[i];

        if ( numMayor < vector[i])
        {
            numMayor = vector[i];
        }

        if (vector[i] == 20)
        {
            numAcumulador = 1 + numAcumulador; 
        }
        
    }
    
    printf("Posiciones impares: %i, %i, %i \n", vector[0], vector[2], vector[4]);
    // printf("Numeros impares: %i, %i\n", vector[i], vector[i]);
    printf("La suma del vector es: %i \n", sumaVector);
    printf("El numero mayor es: %i \n", numMayor);
    printf("La cantidad de 20 es: %i", numAcumulador);
}