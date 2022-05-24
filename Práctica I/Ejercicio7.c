#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Ingresar el valor de la hora y el tiempo trabajado por un comerciante, 
calcular su sueldo e imprimirlo
*/

int main()

{
    float valorHora;
    float valorTiempo;
    float valorSalarioReferido;
    float valorSueldo;


    printf("Ingresar el valor de las horas trabajadas por el Comerciante\n");
    scanf("%f",&valorHora);

    printf("Ingresar el valor del tiempo trabajado por el Comerciante\n");
    scanf("%f",&valorTiempo);

    valorSueldo = (valorHora * valorTiempo);

    printf("El sueldo del comerciante es %f\n", valorSueldo);

    system("pause");
    return(0);
}