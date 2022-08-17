#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 

void main()
{

    ////////////////////////////////////////////// EJEMEPLO

    /*
        char inicialNombre;
        int edad;

        printf ("ingrese la inicial de tu nombre:\n");
        scanf("%c", &inicialNombre);

        printf ("ingresa tu edad:\n");
        scanf("%i", &edad);

        printf("Hola %c, tu edad es %i. \n",inicialNombre, edad);

        system("pause"); // Para que la consola no se cierre
    */

    ////////////////////////////////////////////// EJERCICIO 1

    /*
        int valor1;
        int valor2;

        int resultado;

        printf("Ingrese valor entero N1:\n");
        scanf("%i", &valor1);

        printf("Ingrese valor entero N2:\n");
        scanf("%i", &valor2);

        resultado = valor1 + valor2;

        printf("La suma es: %i\n", resultado);
    */

    ////////////////////////////////////////////// EJERCICIO 2

    /*
        int numero1;
        int numero2;
        int numero3;

        int suma;

        printf("Ingrese valor entero N1:\n");
        scanf("%i", &numero1);

        printf("Ingrese valor entero N2:\n");
        scanf("%i", &numero2);

        printf("Ingrese valor entero N3:\n");
        scanf("%i", &numero3);

        suma = numero1 + numero2 + numero3 ;

        printf("La suma es: %i\n", suma);
    */

    ////////////////////////////////////////////// EJERCICIO 3

    /*
        int lado1;
        int lado2;
        int lado3;

        int perimetro;

        printf("Ingrese lado N1:\n");
        scanf("%i", &lado1);

        printf("Ingrese lado N2:\n");
        scanf("%i", &lado2);

        printf("Ingrese lado N3:\n");
        scanf("%i", &lado3);

        perimetro = lado1 + lado2 + lado3;

        printf("La suma es: %i \n", perimetro);
    */

    ////////////////////////////////////////////// EJERCICIO 4

    /*
        int a=0;
        int b=0;
        float hipotenusa=0;
        float perimetro=0;
        float superficie=0;

        printf("Ingrese el primer lado:\n");
        scanf ("%f",a);

        printf("Ingrese el segundo lado:\n");
        scanf ("%f",b);

        hipotenusa= sqrt(a*a + b*b); //pow(a,2)
        perimetro= a + b + hipotenusa;
        superficie= (a*b)/2;

        printf("La hipotenusa es igual a: %f \n", hipotenusa);
        printf("La perimetro es igual a: %f \n", perimetro);
        printf("La superficie es igual a: %f \n",superficie);
    */

    ////////////////////////////////////////////// EJERCICIO 5

    /*
        float lado1, lado2, superficie, perimetro, diagonal, hipotenusa;

        printf("Ingrese lado N1:");
        scanf("%f", &lado1); // %.2f= Para que me muestre solo dos numeros despues de la coma

        printf("Ingrese lado N2:");
        scanf("%f", &lado2);

        perimetro = lado1 + lado2 + lado1 + lado2;
        superficie = (lado1 * lado2)/2 ;
        hipotenusa = sqrt(lado1 * lado2);
        diagonal= sqrt(pow(lado1,2) + pow (lado2,2));
        printf("El perimetro es: %.2f. \nLa superficie es: %.2f. \nLa hipotenusa es: %.2f. \nLa diagonal es: %.2f", perimetro, superficie, hipotenusa, diagonal);
    */

    ////////////////////////////////////////////// EJERCICIO 6

    /*
        int valor1, valor2, resta, suma, producto;

        printf("Ingrese valor N1:\n");
        scanf("%i", &valor1);

        printf("Ingrese valor N2:\n");
        scanf("%i", &valor2);

        suma = valor1 + valor2;
        producto = valor1 * valor2;
        resta = valor1 - valor2;

        printf("El resultado de la suma es: %i. \nEl resultado del producto: %i. \nEl resultado de la resta es: %i.", suma, producto, resta);'
    */

    ////////////////////////////////////////////// EJERCICIO 7

    /*
        int hora, valor;

        printf("Ingrese las horas trabajadas \n");
        scanf("%i", &hora);

        printf("Ingrese el valor de la hora \n");
        scanf("%i", &valor);

        int sueldo = valor * hora;

        printf("El suedlo es: $%i.", sueldo);
    */

    ////////////////////////////////////////////// EJERCICIO 8 (Practica 1) Estructuras If y Switch

    /*
            int tiempo, sueldo;
            int valorT = 800;

            printf("Ingrese el tiempo trabajado \n");
            scanf("%i", &tiempo);

            sueldo = tiempo * valorT;

            printf("El suedlo del contador eses: $%i.", sueldo);
    */

    ////////////////////////////////////////////// EJERCICIO 9 (Practica 2) Estructuras If y Switch

    /*
        int numberA, numberB;

        printf("Ingrese el numero A \n");
        scanf("%i", &numberA);

        printf("Ingrese el numero B \n");
        scanf("%i", &numberB);

        if(numberA > numberB)
            {
                printf("El numero mas grande es %i.", numberA);
            }
            else if (numberB > numberA)
            {
                printf("El numero mas grande es %i.", numberB);
            }
            else
            {
                printf("Los numeros son iguales");
            }

            system("pause");
    */

    ////////////////////////////////////////////// EJERCICIO 10 (Practica 3) Estructuras If y Switch

    /*
        int number;

        printf("Ingrese el numero a analizar \n");
        scanf("%i", &number);

        if (number > 0)
        {
            printf("El numero seleccionado es %i y es POSITIVO \n", number);
        }
        else if (number < 0)
        {
            printf("El numero seleccionado es %i y es NEGATIVO \n", number);
        }
        else{
            printf("El numero seleccionado es %i y es NULO \n", number);
        }
    */

    ////////////////////////////////////////////// EJERCICIO 11 (Practica 4) Estructuras If y Switch

    /*
        int valor1, valor2, valor3;

        printf("Ingrese el primer numero \n");
        scanf("%i", &valor1);

        printf("Ingrese el segundo numero \n");
        scanf("%i", &valor2);

        printf("Ingrese el tercer numero \n");
        scanf("%i", &valor3);


            if (valor1 > valor2 && valor1 > valor3)
            {
                printf("El numero mas grande es el N1 con un valor de %i, \n", valor1);
            }
            else if (valor2 > valor1 && valor2 > valor3)
            {
                printf("El numero mas grande es el N2 con un valor de  %i, \n", valor2);
            }
            else
            {
                printf("El numero mas grande es el N3 con un valor de %i, \n", valor3);
            }
    */

    ////////////////////////////////////////////// EJERCICIO 12 (Practica 6) Estructuras If y Switch

    /*
        int alumno = 0;

        printf("Ingrese la nota del alumno \n");
        scanf("%i", &alumno);

        if (alumno < 4)
        {
            printf("El alumno esta REPROBADO. La nota del alumno es %i, \n", alumno);
        }
        else if (alumno < 6)
        {
            printf("El Alumno esta REGULAR. La nota del alumno es %i, \n", alumno);
        }
        else if (alumno >= 0 && alumno < 11)
        {
            printf("El Alumno esta PROMOCIONADO. La nota del alumno es %i, \n", alumno);
        }   
        else 
        {
            printf("Nota invalida");
        }
    */   

    ////////////////////////////////////////////// EJERCICIO 13 (Practica 7) Estructuras If y Switch

    /*
        float precioOriginal, porcentajeDescuento15 = 15, porcentajeDescuento10 = 10;
        printf("Ingresa el precio original: $");
        scanf("%f", &precioOriginal);
        
        if (precioOriginal >= 100000)
        {
            //Inicializamos y calculamos el descuento sobre el precioOriginal
            float descuento = precioOriginal * (porcentajeDescuento15 / 100);
            //Restamos la variable descunto sobre el precioTotal
            float precioTotal = precioOriginal - descuento;
            printf("El precio total es: $%0.2f", precioTotal);
        }
        else 
        {
            //Inicializamos y calculamos el descuento sobre el precioOriginal
            float descuento = precioOriginal * (porcentajeDescuento10 / 100);
            //Restamos la variable descunto sobre el precioTotal
            float precioTotal = precioOriginal - descuento;
            printf("El precio total es: $%0.2f", precioTotal);
        }
    */

    ////////////////////////////////////////////// EJERCICIO 14 (Practica 8) Estructuras If y Switch

    /*
        int saldoInicial = 1000000;

        int retiro = printf("Ingrese el valor del retiro: ");
        scanf("%i", &retiro);
        scanf("%i", &saldoInicial);

        float saldoFinal = saldoInicial - retiro;
        scanf("%i", &saldoFinal);

        if(retiro > 0) 
        {
            printf("La cuenta cuenta con %i", saldoFinal);
        }
    */

    ////////////////////////////////////////////// EJERCICIO 15 (Practica 9) Estructuras If y Switch

    /*
        int altura = printf("Ingresar la altura del susodicho: ");
        scanf("%i", &altura);

        if (altura <= 150)
        {
            printf("Persona de altura por debajo de la media"); 
        }   
        else if (altura > 151 && altura < 170)
        {
            printf("Persona de altura media");
        }
        else if (altura > 171 && altura < 251)
        {
            printf("Persona de altura por arriba de la media");2
        }
        else
        {
            printf("Altura no valida");
        }
    */

    ////////////////////////////////////////////// EJERCICIO 16 (Practica 10) Estructuras If y Switch

    /*
        int diaMes;
        diaMes = printf("Indique el numeor del mes, por favor: ");
        scanf("%i", &diaMes);

        switch (diaMes)
        {   
        case 1:
            printf("El mes es Enero");
            break;

        case 2:
            printf("El mes es Febrero");
            break;

        case 3:
            printf("El mes es Marzo");
            break;

        case 4:               
            printf("El mes es Abril");
            break;

        case 5:
            printf("El mes es Mayo");
            break;

        case 6:
            printf("El mes es Junio");
            break;
        case 7:
            printf("El mes es Julio");
            break;
        case 8:
            printf("El mes es Agosto");1
            break;
        case 9:
            printf("El mes es Septiembre");
            break;
        case 10:
            printf("El mes es Octubre");
            break;
        case 11:
            printf("El mes es Noviembre");
            break;
        case 12:
            printf("El mes es Diciembre");
            break;
        default:
            printf("Mes no contemplado");
            break;
        }
    */

    ////////////////////////////////////////////// EJERCICIO 17 (Practica 11) Estructuras If y Switch

    /*
        //Entrada de valores
        float valor1 = printf("Por favor ingrese un primer valor (DECIMAL): ");
        scanf("%f", &valor1);
        float valor2 = printf("Por favor ingrese un segundo valor valor (DECIMAL): ");
        scanf("%f", &valor2);
        

        //Operaciones
        float suma = (valor1 + valor2);
        float resta = (valor1 - valor2);
        float multiplicacion = (valor1 * valor2);
        float division = (valor1 / valor2);

        int seleccion = printf("Ingrese un numero para seleccionar operacion: 1 SUMA, 2 RESTA, 3 MULTIPLICACION, 4 DIVISION, 5 SALIR: ");
        scanf("%i", &seleccion);

        //Opciones
        if (seleccion == 1)
        {
            printf("El restultado de la suma es: %f ", suma);
        }
        else if (seleccion == 2)
        {
            printf("El restultado de la resta es: %f ", resta);
        }
        else if (seleccion == 3)
        {
            printf("El restultado de la multiplicacion es: %f ", multiplicacion);
        }
        else if (seleccion == 4)
        {
            printf("El restultado de la division es: %f ", division);
        }
        else if (seleccion == 5)
        {
            printf("Programa finalizado, gracias");
        }
        else
        {
            printf("Caracter invalido");
        }
    */

    ////////////////////////////////////////////// EJERCICIO 18 (Practica 12) Estructuras If y Switch

    int dni = printf ("Por favor ingrese su DNI (sin puntos)");
    scanf("%i", &dni);

    if (dni > 99999999 && dni < 1000000)
    {

    }
}















