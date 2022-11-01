#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    float inflacion[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    int posicionMay, posicionMen;
    float acumInflacion, numMayor, numMenor;

    for (int i = 0; i <= 12; i++)
    {
        acumInflacion = inflacion[i] + acumInflacion;

        if (numMayor < inflacion[i])
        {
            numMayor = inflacion[i];
            posicionMay = i + 1;
        }

        if (inflacion[i] < numMenor)
        {
            numMenor = inflacion[i];
            posicionMen = i + 1;
        }
    }
    
    printf("La inflacion total es: %0.2f \n", acumInflacion);
    printf("El numero mayor es: %0.2f. " "Y su posicion es: %i \n", numMayor, posicionMay);
    printf("El numero menor es: %0.2f. " "Y su posicion es: %i \n", numMenor, posicionMen);
}