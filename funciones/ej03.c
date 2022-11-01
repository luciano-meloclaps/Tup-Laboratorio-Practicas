#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h>  // Libreria que permite hacer uso de la funcion system

// Crear una función llamada “signo”, que reciba un número real, y devuelva un número
// entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero

int signo(float getNum);

float numIngresadoReal;

int main()
{
    printf("Ingrese un numero REAL: ");
    scanf("%f", &numIngresadoReal);
    
    printf("La funcion Signo devuelve: ");
    printf("%i", signo(numIngresadoReal));
}

int signo(float getNum)
{
    int numRealPasaInt = 0;
    if (getNum < 0 )
    {
        return numRealPasaInt - 1;
    }
    else if ( getNum == 0)
    {
        return numRealPasaInt;
    }
    else
    {
        return numRealPasaInt + 1;
    }
    
}