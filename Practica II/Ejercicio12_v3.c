#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
    int dni;
    int venta;
    int metdPag;
    int tipoTarjeta;
    int cantCuotas;
    venta = 4600;

    printf("Por favor ingrese su DNI \n");
    scanf("%d", &dni);

    if (dni >= 10000000 && dni <= 99999999)
    {
        printf("Seleccione un medio de pago \n \n");
        printf("1- Efectivo \n");
        printf("2- Tarjeta \n");
        
        scanf("%d", &metdPag);

        switch (metdPag)
        {
         case 1: /* Efectivo */
            printf("Usted pagara en efectivo sin ningun interes \n");
            break;
         case 2: /* Tarjeta */
            printf("Seleccione una tarjeta \n \n");
            printf("1- Visa \n");
            printf("2- American Express \n");
            printf("3- Mercado Pago \n");
            printf("4- Cabal \n");

            scanf("%d", &tipoTarjeta);
            switch (tipoTarjeta)
            {
            case 1:
                printf("Visa \n");
                 break;
            case 2:
                printf("American Express \n");
                break;
            case 3:
                printf("Mercado Pago \n");
                break;
            case 4:
                printf("Cabal \n");
                break;        
            default:
               printf("Seleccione una tarjeta valida \n");
              break;
            }

            printf("Elija una cantidad de cuotas \n \n");
            printf("1 Cuota sin interes \n");
            printf("3 Cuotas: Interes del 4 por ciento \n");
            printf("6 y 12 Cuotas: Interes del 8 por ciento \n");

            scanf("%d", &cantCuotas);
            switch (cantCuotas)
            {
            case 1:
                printf("1 Cuota sin interes \n");
                venta = venta;
                break;
            case 3:
                venta = venta + (venta * 0.04);
                printf("Cantidad a abonar %d \n \n", venta);
                break;
            case 6: case 12:
                venta = venta + (venta * 0.08);
                printf("Cantidad a abonar %d \n \n", venta);
                break;    
            default:
            printf("Elija una cantidad de cuotas valida \n");
                break;
            }

            break; /* Break case 2 */

         default:
            printf("Seleccione un medio de pago valido \n");
            break;
        }

        printf("RESUMEN \n\n");
        printf("DNI: %d \n", dni);
        switch (metdPag)
        {
        case 1:
            printf("Medio de pago: Efectivo \n");
            break;
        case 2:
            printf("Medio de pago: Tarjeta de Credito \n");
            break;
        default:
            break;
        }
        switch (tipoTarjeta)
        {
        case 1:
            printf("Tarjeta: Visa  \n");
            break;
        case 2:
            printf("Tarjeta: American Express  \n");
            break;
        case 3:
            printf("Tarjeta: Mercado Pago  \n");
            break;
        case 4:
            printf("Tarjeta: Cabal  \n");
            break;
            
        default:
            break;
        }

        switch (cantCuotas)
        {
        case 1:
            printf("Cuotas: 1 \n");
            break;
        case 3:
            printf("Cuotas: 3 \n");
            break;
        case 6:
            printf("Cuotas: 6 \n");
            break;
        case 12:
            printf("Cuotas: 12 \n");
            break;
        default:
            break;
        }

        printf("Total: %d \n", venta);

   
    }
    else
    printf("Ingrese un DNI valido \n");


system("Pause");
}