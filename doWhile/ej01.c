#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{
    int valor = 1;
    while (valor <= 100)
        {
        printf("%d - ", valor);
        valor = valor + 1;
        }
}