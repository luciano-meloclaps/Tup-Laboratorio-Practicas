#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    for (int i = 5; i > 0 ; i--)
    {
        int contAlumnos = 1 + contAlumnos;
        printf("Ingresar notas para el alumno N: %i \n", contAlumnos);
        

        for (int j = 0; j > 3; j++)
        {
            int contNotas = 1 + contNotas;
            printf("Ingresar las notas: %i \n", contNotas);
            scanf("%i", &contNotas);
        }

        
    }
}