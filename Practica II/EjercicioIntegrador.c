#include <stdio.h>
#include <stdlib.h>

void main()

{
    int tipoVehiculo;
    int cantPasajeros;
    int tipoHorarioDia;

    printf("Ingrese el horario de congestion:\n 1- Alta\n 2- Baja\n");
    scanf("%d", tipoHorarioDia);

    switch (tipoHorarioDia)
    {
    case 1:
        printf("Ingrese el tipo de vehiculo:\n 1- Camion\n 2- Automovil\n 3- Moto\n \n");
        scanf("%d", &tipoVehiculo);
        

        break;
    case 2:
        /* code */
        break;
    default:
        break;
    }

    printf("Ingrese el tipo de vehiculo:\n 1- Camion\n 2- Automovil\n 3- Moto\n \n");
    scanf("%d", &tipoVehiculo);

    

    switch (tipoVehiculo)
    {
    case 1:
        printf("Camion \n");
        break;
    case 2:
        printf("Automovil \n");
        break;
    case 3:
        printf("Moto \n");
        break;
    default:
        printf("Seleccione un tipo de vehiculo valido \n");
        break;
    }










}