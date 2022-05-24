#include <stdio.h>
#include <stdlib.h>

void main()


{
    float inflacion[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    int i;
    float inflacionAnual = 1;
    float mayor, menor;
    
    mayor = inflacion[0];
    menor = mayor;


    for (i = 0; i <= 11; i++)
    {
        inflacionAnual = inflacionAnual * (1 + inflacion[i]);
    } 

    printf("La inflacion anual es %.2f\n", inflacionAnual);

    for (i = 0; i <= 11; i++)
    {
        if (inflacion[i] > mayor)
        {
            mayor = inflacion[i];
            printf("La inflacion mas alta fue de %.2f en el mes %d\n", mayor, i+1);
            
        }
        if (inflacion[i] < menor)
        {
            menor = inflacion[i];
            printf("La inflacion mas baja fue de %.2f en el mes %d\n", menor, i+1);
        }
    }

    
    


    

}