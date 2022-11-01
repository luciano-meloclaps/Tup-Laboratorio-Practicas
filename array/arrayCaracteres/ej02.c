#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*2. Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.
 */

/*strcmp(arg1, arg2) Devuelve 0 si las cadenas representadas por
arg1 y arg2 son iguales, o un valor menor que cero si arg1 precede
alfabéticamente a arg2.*/

void main()
{
    char nombre1[50];
    char nombre2[50];

    printf("Ingrese el primer nombre: \n");
    scanf("%s", &nombre1);

    printf("Ingrese el segundo nombre: \n");
    scanf("%s", &nombre2);

    if (strcmp(nombre1, nombre2) == 0)
    {
        printf("Los nombres son iguales\n");
    }
    else if (strcmp(nombre1, nombre2) < 0)
    {
        printf("%s precede alfabeticamente a %s\n", nombre1, nombre2);
    }
    else
    {
        printf("%s precede alfabeticamente a %s\n", nombre2, nombre1);
    }
}
