#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{   
    float num;
    int cont = 1;
    float suma = 0 ;
    do {
        float num = printf("Ingrese un numero real, positivo:  ");
        scanf("%f", &num);

        if ( num > 0)
        {
            cont = cont + 1;
            printf("El bucle esta en %i. ", cont);
            suma = suma + num;
        } else {
            printf("Error el valor es incorrecto. ");
        }
    } while (cont <= 10);
    printf("la sumna es: %f", suma);
}