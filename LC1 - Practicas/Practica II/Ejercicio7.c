#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y un 10% si es menor. 
Validar que la venta sea mayor que 0, caso contrario informar dicha situación.
*/


void main()

{
    float venta;
    float descuento1;
    float descuento2;

    descuento1 = 0.15;
    descuento2 = 0.10;

    printf("Ingrese el monto de la venta \n");
    scanf("%f", &venta);

if (venta > 0)
{
    if (venta >= 100000)
     {
        venta = (venta - (venta * descuento1));
        printf("El monto con un descuento del 15 por ciento es %0.2f \n", venta);
     }

    else
    if (venta < 100000)
     {
        venta = (venta - (venta * descuento2));
        printf("El monto con un descuento del 10 por ciento es %0.2f \n");
     }
}
 else
 printf("Por favor ingrese un monto que sea mayor que 0 \n");

system("pause");
}