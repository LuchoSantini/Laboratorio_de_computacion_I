#include <stdio.h>
#include <stdlib.h>

void main()

{
    int A, B, C, D, E; // Vendedores
    int comercio;
    int contador = 1;
    float ventas, suma;
    float comision;

    printf("Vendedores:\n A= 1 \n B= 2 \n C= 3 \n D= 4 \n E= 5\n");
    
    do
    {
        printf("Vendedor %d: Ingrese el importe de las ventas. \n", contador);
        printf("Para pasar al siguiente vendedor ingrese un 0 \n");
        do
        
        {
         scanf("%f", &ventas);
         suma = suma + ventas;
         comision = suma * 0.025;

        } while (ventas != 0);
        
        printf("Vendedor %d: Comision = %f\n", contador, comision);

        contador++;
        comision = 0;
        suma = 0;
        
    } while (contador <= 2);
}