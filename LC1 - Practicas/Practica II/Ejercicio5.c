#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
Escriba un programa que pida ingresar un número 
y a continuación escriba en la consola si el mismo es par o impar.
*/

int main()



{
    int numero1;
    int resultado;

    printf("Escriba un numero para determinar su paridad \n");
    scanf("%d", &numero1);

    if ((numero1 % 2) == 0)
     {
        printf("El numero es par \n");
     }
    else
    {
       printf("El numero es impar \n");
      
        system("Pause");
}