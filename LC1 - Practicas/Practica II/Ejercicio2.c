#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en pantalla. 
Informar también si los números son iguales.
*/

void main()

{
    int numero1;
    int numero2;

    printf("Ingresar el primer numero \n");
    scanf("%d", &numero1);
    
    printf("Ingresar el segundo numero \n");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    { 
     printf("%d" " es mayor que " "%d" "\n", numero1, numero2);
    }

    else if (numero1 < numero2)
    {
     printf("%d" " es menor que " "%d" "\n", numero1, numero2);
    }

    else
    {
     printf("Los numeros son iguales \n");
    }
    
    system("pause");

}