#include <stdio.h>
#include <stdlib.h>

void main()

{
    int dni = 38632584;
    float nota = 7;

    int dniIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;

    printf("Ingrese el DNI del alumno \n %d", dniIngresado);

    do 
    {
    scanf("%d", &dniIngresado);
    if (dniIngresado == dni)

    {
        printf("La nota es %f \n", nota);
    }

    else if (dniIngresado != dni)
    
    {
        printf("DNI Incorrecto \n");
        ingresaCorrectamente = ingresaCorrectamente + intentos;
    }
    
    }while(dniIngresado != dni && ingresaCorrectamente <= 3);
    
    if (ingresaCorrectamente = 3)
    printf("Limite de intentos alcanzado \n");

    system("Pause");
}