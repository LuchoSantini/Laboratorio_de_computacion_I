#include <stdio.h>
#include <stdlib.h>

// Dado el vector {10, 20, 5, 15, 30, 20}

void main()

{
    int arreglo[] = {10, 20, 5, 15, 30, 20};
    int i, j, k, suma, impar, mayor;
    suma = 0;
    mayor = 0;

    for (i = 0; i <= 5; i++)
    {
        printf("El numero en la posicion %d es %d \n", i, arreglo[i]);
        suma = suma + arreglo[i];
    }

    printf("\nLa suma de los arreglos es %d\n", suma);

    for (j = 0; j <= 5; j++)
    {
        if (j % 2 != 0)
        {
            printf("El numero %d en la posicion %d es impar \n", arreglo[j], j);
        }
    }

    for (k = 0; k <= 5; k++)
    {
        if (arreglo[k] > mayor)
        {
            mayor = arreglo[k];
        }
    }
    printf("El numero mayor es %d \n", mayor);
    
    



}