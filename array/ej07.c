#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h>  // Libreria que permite hacer uso de la funcion system
#include <math.h>

void main()
{
    int questionNota, i, contadorNota = 0;
    float promedioNotas = 0;
    float acumNota[i];
    
    printf("Cuantas notas desea cargar?: ");
    scanf("%i", &questionNota);

    float arrayNota[questionNota];

    for ( i = 0; i <= questionNota ; i++)
    {
        
        printf("Ingrese las %i notas: ", i + 1);
        scanf("%f", &arrayNota[i]);

    

        contadorNota = contadorNota + arrayNota[i];
        
    }
    
    

    printf("aa %f", arrayNota[questionNota]);
    printf("La suma de las notas es: %i", contadorNota);
}