#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
    int dni;
    float venta;
    venta = 4600;
    int metdPago;
    int selecTarjeta;

     printf("Por favor, ingrese su DNI \n");
    scanf("%d", &dni);

  
    if (dni >= 10000000 && dni <= 99999999)
    {
        printf("Seleccione un metodo de pago \n");
        printf("1- Efectivo \n");
        printf("2- Tarjeta de Credito \n");
    }
    else
    {
        printf("Ingrese un DNI valido \n");
    }
    scanf("%d", &metdPago);
    switch (metdPago)
    {
    case 1:
        printf("Usted selecciono Efectivo \n");
        break;
    case 2:
        printf("Usted selecciono Tarjeta \n \n");
        printf("Por favor seleccione una \n");
        printf("1- Visa \n");
        printf("2- American Express \n");
        printf("3- Mercado Pago \n");
        printf("4- Cabal \n");
        break;
    
    default:
        break;
        

scanf("%d", &metdPago);
if (metdPago >=1 && metdPago <=4)
 switch (metdPago)
 {
    case 1:
    printf("Usted selecciono Visa \n");
    break;
    case 2:
    printf("Usted selecciono Express \n");
    break;
    case 3:
    printf("Usted selecciono Mercado Pago \n");
    break;
    case 4:
    printf("Usted selecciono Cabal \n");
    break;

    default:
        break;
 }
else
{
    printf("Por favor ingrese una opcion valida \n");
}
    }
printf("Por favor, ingrese la cantidad de cuotas en la que quiere abonar el pago \n");




}
