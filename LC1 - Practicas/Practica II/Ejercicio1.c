#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Ingresar por teclado dos números, determinar cual es el mayor
y visualizarlo en pantalla
*/

void main()

{
    int numero1;
    int numero2;

    printf("Ingrese el primer numero \n");
    scanf("%d", &numero1);
    
    printf("Ingrese el segundo numero \n");
    scanf("%d", &numero2);
    
    if (numero1 > numero2)
    {
     printf("%d" " es mayor que " "%d\n", numero1, numero2);
    }
    else 
    printf("%d" " es menor que " "%d" "\n", numero1, numero2);

    system("pause");
    
}
 