#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    int i = 0;
    int valor1 = 0;
    printf ("Ingresar un valor no negativo: ");
    scanf("%i", &valor1);
    

    for (int i = valor1; i > 0; i--)
    {
        printf("\n");
        int contador = 0;

        for (int j = 0; j < i; j++)
        {
            contador = 1 + contador;
            printf(" - %i", contador);
            
        }
    }
    
    
}
