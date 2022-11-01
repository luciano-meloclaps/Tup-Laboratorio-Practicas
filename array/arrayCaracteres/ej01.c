#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras)*/

void main()
{

    int i;
    char nombres[3][50];

    for (i = 0; i < 3; i++)
    {
        printf("Escribre el nombre del alumno %i\n", i + 1);
        scanf("%s", &nombres[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s, cantidad de caracteres:\n", nombres[i]);
        printf("%d\n", strlen(nombres[i]));
    }
}