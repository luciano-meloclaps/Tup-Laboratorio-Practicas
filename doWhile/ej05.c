#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    int dni = 38632584;
    float nota = 7;
    int dniIngresado = 0;
    int ingresaCorrectamente = 0;
    int intentos = 1;
    
    while (intentos <= 3)
    {
        printf("%i", intentos);
        intentos++;
    
        printf("Ingrese el dni del usuario: ");
        scanf("%i", dniIngresado);

        if (dni == dniIngresado)
        {
            printf("nota");
        }
        else{
            printf("error");
        }
    }

    printf("Erros demasiados intentos");

    
    
}
