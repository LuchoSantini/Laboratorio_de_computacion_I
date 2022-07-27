#include <stdio.h>
#include <stdlib.h>

void main()

{
    int arreglo[5];
    int suma = 0;
    float promedio = 0;
    int i;

    arreglo[0] = 2;
    arreglo[1] = 4;
    arreglo[2] = 6;
    arreglo[3] = 8;
    arreglo[4] = 10;

    for (i = 0; i <= 4; i++)
    {
        printf("El numero en la posicion %d es %d \n", i, arreglo[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        suma = suma + arreglo[i];
    }
    promedio = suma / 5;
    
    printf("\nLa suma de los arreglos es %d\n", suma);
    printf("El promedio de los arreglos es %.2f\n", promedio);


}