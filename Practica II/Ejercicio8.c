#include <stdio.h>
#include <stdlib.h>

/*
Actualizar el saldo de una cuenta bancaria, a partir de un retiro. 
Verificar que el saldo sea mayor o igual que el importe a retirar.
*/


void main()

{
    float saldoCuentaBancaria;
    float retiro;
    
    saldoCuentaBancaria = 170000;
     
    printf("Ingrese el importe que desea retirar \n");
    scanf("%f", &retiro);

    if (saldoCuentaBancaria >= retiro)
       {
           (saldoCuentaBancaria = saldoCuentaBancaria - retiro);
           printf("Su nuevo saldo es " "%0.2f" "\n", saldoCuentaBancaria);
       }

    else
    printf("El importe que desea retirar es mayor al saldo de la cuenta \n");


    system("pause");

}