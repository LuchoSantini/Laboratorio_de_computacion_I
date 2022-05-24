#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

/* Ingresar el tiempo trabajado por un contador; 
  el programa se encargará de calcular el sueldo. */

{
    float tiempoContadorEnHoras; // Considerando que el contador trabaja 160 horas mensuales.
    const float valorHora = 800;
    float sueldoContador;

    printf("Ingresar el tiempo trabajado: \n");
    scanf("%f", &tiempoContadorEnHoras);

    sueldoContador = (valorHora * tiempoContadorEnHoras);

    printf("El sueldo del contador es: %f\n", sueldoContador);

    system("pause");
    return(0);
}