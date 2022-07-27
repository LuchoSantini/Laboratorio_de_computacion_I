#include <stdio.h>
#include <stdlib.h>

void main()

{
    float numero;
    int contador = 0;

    printf("Ingrese una serie de numeros, si ingresa el 0 el programa termina \n");
    do
    {
        scanf("%f", &numero);
        contador ++;

    } while (numero != 0);

    printf("La cantidad de numeros ingresados es %d \n", contador);
    
}