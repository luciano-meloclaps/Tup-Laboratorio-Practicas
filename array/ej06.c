#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    int facturacion[6];
    int contadorFact = 0;
    float promedioFact = 0;
    int numMayor, numMenor;

    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese la facturacion del mes %i: ", i);
        scanf("%i", &facturacion[i]);

        //Facturacion total
        contadorFact = facturacion[i] + contadorFact;

        //Numero mayor
        if (numMayor < facturacion[i])
        {
            numMayor = facturacion[i];
        }

        //Numero menor
        if (numMenor > facturacion[i])
        {
            numMenor = facturacion[i];
        }
        
    }

    //Promedio facturacion
    promedioFact = contadorFact / 6;

    
    //Imp
    printf("\nFacturacion total: %i \n", contadorFact);
    printf("Promedio de facturacion: %.2f \n", promedioFact);
    printf("El numero mayor es: %i \n", numMayor);
    printf("EL numero menor es: %i", numMenor);
    

}