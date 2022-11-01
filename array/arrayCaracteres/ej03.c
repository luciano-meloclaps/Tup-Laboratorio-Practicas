#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*3. Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
"nombre apellido" para cada uno, y mostrar por consola.*/
/*strcat(arg1, arg2) Concatena las cadenas representadas por arg1 y arg2*/

void main()
{
    char nombres[10][50];
    char apellidos[10][50];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese el nombre del alumno: %i\n", i + 1);
        scanf("%s", nombres[i]);

        printf("Ahora el apellido: \n");
        scanf("%s", &apellidos[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("-----------\n");
        printf("%s \n", strcat(nombres[i], apellidos[i]));
    }
}