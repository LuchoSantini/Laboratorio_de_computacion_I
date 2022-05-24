#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.
*/

void main()

{
    int numero1;
    
    printf("Ingrese un numero Entero \n");
    scanf("%d", &numero1);

    
        if (numero1 > 0)
        {
         printf("El numero es positivo \n");
        }
        else 
        {
        
            if (numero1 < 0)
            {
               printf("El numero es negativo ");
            }
            else 
            {
                printf("El numero es nulo \n");
            }
        }

        system("pause");
            

}