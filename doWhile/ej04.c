#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    //Dec e Ini
    int contador = 0;
    float promedio = 0;
    int alumnos = 0;
    int parciales = 0;
    int notas = 0;
    float div = 0;

    // Ingreso de datos
    printf("Cauntos alumnos son: ");
    scanf("%i", &alumnos);

    printf("Cauntos parciales son: ");
    scanf("%i", &parciales);

    printf("Alumnos: %i \n", alumnos);
    printf("Parciales: %i \n", parciales);

    do
    {  
        printf("Ingrese las notas: ");
        scanf("%i", &notas);

        if (notas >= 1 && notas <= 10)
        {
            promedio = notas + promedio;
            div = promedio / parciales;
            
        }
        else {
            printf("mal");
        }
        printf("El promedio es: %f", div);
        contador = contador + 1;
    } while (contador < parciales);
    
}