#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h>  // Libreria que permite hacer uso de la funcion system
#include <math.h>

//Crear una función que calcule el cubo de un número real (float). El resultado deberá
//ser otro número real.

float cuboCalcular(float cuboDeNumReal);

int main()
{
    float cubIngresado;

    printf("Ingrese un numero para calcular: ");
    scanf("%f", &cubIngresado);

    cuboCalcular(cubIngresado);
}

float cuboCalcular(float cuboDeNumReal)
{
    float respuesta;
    respuesta = pow(cuboDeNumReal,3);
    printf("El cubo de ese numero es: %.2f", respuesta);
    return respuesta;
}