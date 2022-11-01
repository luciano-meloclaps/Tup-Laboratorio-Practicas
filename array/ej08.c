#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Leer 10 números por teclado, 5 para un array y 
//5 para otro array distinto.
//Mostrar los 10 números en pantalla mediante un solo array.

void main()
{
    int i;
    int numeroPrimeros5[5];
    int numeroSegundos5[5];
    int arrayFinal[10];
    
    for (int k = 1; k <= 10; k++)
    {
        if (i <= 5)
        {
        printf("Por favor ingrese el numero %i:", k);
        scanf("%i", &numeroPrimeros5[i]);
        }

        else if (i > 5)
        {
            printf("Por favor ingrese el numero %i:", k);
            scanf("%i", &numeroSegundos5[i]);
        }
    }

    for (int j = 1; j <= 10; j++)
    {
        printf("La vaca lola\n");
        arrayFinal[i] = numeroPrimeros5[i];
    }

    for (int l = 0; l <= 10; i++)
    {
        printf("%i",arrayFinal[i]);
    }
    
    
    
}