#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    
    for (int i = 5; i > 0 ; i--)
    {

        int contAlumnos =  1 + contAlumnos;
        printf("ALUMNO N: %i \n", contAlumnos);
        
        
        for (int j = 0; j <= 2; j++)
        {
            int nota = printf("Ingresar las notas: \n");
            scanf("%i", &i);
            int acumNotas = nota + acumNotas ;
            int promedio = acumNotas / 3;
            
        }
    
    }
}