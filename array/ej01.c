#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    int cadenaNumero[7] = {3, 5, 6, 7, 8, 9, 10}; //Array con 7 elementos
    
    for (int i = 0; i < 7; i++)
    {
        printf("Aumento: %i \n",  cadenaNumero[i]);
    }
    
    for (int i = 7; i > 0; i--)
    {
        printf("\tDecremento: %i \n",  cadenaNumero[i]);
    }
    
}
