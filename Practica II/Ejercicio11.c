#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()

{
    float num1;
    float num2;
    int numCaso;
    float acumulador;

    printf("Ingrese dos numeros \n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("\nSeleccione una operacion \n \n");
    printf("1- Informar su suma \n");
    printf("2- Informar su resta \n");
    printf("3- Informar su multiplicacion \n");
    printf("4- Informar su division \n");
    printf("5- Salir \n \n");

    scanf("%d", &numCaso);

    if((numCaso >= 1) && (numCaso <= 5))
     switch (numCaso)
     {
     case 1:
        acumulador = num1 + num2;
        printf("La suma es %0.2f\n", acumulador);
        break;
     case 2:
        acumulador = num1 - num2;
        printf("La resta es %0.2f\n", acumulador);
        break;
     case 3:
        acumulador = num1 * num2;
        printf("La multiplicacion es %0.2f\n", acumulador);
        break;
     case 4:
        acumulador = num1 / num2;
        printf("La division es %0.2f\n", acumulador);
        break;
     case 5:
        system("pause");    
     default:
        break;

     }
    else
    {
        printf("Ingrese una opcion valida \n");
    }
    
    system("Pause");
}