#include <stdlib.h> // Libreria que permite hacer uso de la funcion printf y scanf
#include <stdio.h> // Libreria que permite hacer uso de la funcion system
#include <math.h> 


void main()
{
    int i = 1;
    int cantVentas = printf("Ingrese las ventas: ");
    scanf("%i", &cantVentas);


        for (int j = 0; j < cantVentas; j++)
        {
            int dniCliente = printf("Ingrese el DNI del cliente, sin puntos:\n");
            scanf("%i", &dniCliente);

            while (dniCliente > 10 && dniCliente < 99)
            {
                int montoVenta = printf("Ingresar el monto de la venta: $");
                scanf("%i", &montoVenta);

                int medioDePago = printf("Seleccione: \n 1 = Pago en efectivo.\n 2 = Pago con credito.\n Ingresar: ");
                scanf("%i", &medioDePago);

                if( medioDePago == 1)
                {
                    printf("Solo tienes que pagat $%i", montoVenta);
                }
                else if ( medioDePago == 2)
                {
                    printf("Cual es la tarjeta: \n 1 Visa. \n 2 American Express. \n 3 Mercado Pago. \n 4 Cabal");
                }
            }
        }
        system("pause");
}

            {
                int montoVenta = printf("Ingresar el monto de la venta: ");
                scanf("%i", &montoVenta);

                int medioDePago = printf("Ingresar: \n 1 = Pago en efectivo.\n 2 = Pago con credito.");
                scanf("%i", &medioDePago);
            }

            if (dniCliente !< 1000000 && dniCliente !> 99999999) 
            {
                int = montoVenta printf("Ingresar el monto de la venta: ")
                scanf("%i", &montoVenta);

                int = medioDePago printf("Ingresar: \n 1 = Pago en efectivo.\n 2 = Pago con credito.")
                scanf("%i", &medioDePago);

                if( medioDePago == 1)
                {

                }
                else if ( medioDePago == 2)
                {
                    printf("Cual es la tarjeta: \n 1 Visa. \n 2 American Express. \n 3 Mercado Pago. \n 4 Cabal")
                }
            }
        
        
    
    
