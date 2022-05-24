#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
pantalla.
*/

int main()

{

int numero1;
int numero2;
int numero3;

printf("Por favor escriba 3 numeros \n");
scanf("%d", &numero1);
scanf("%d", &numero2);
scanf("%d", &numero3);

if ((numero1 > numero2) && (numero1 > numero3))
 {
    printf("El primer numero es el mayor \n", numero1, numero2, numero3);
 }

else if 
((numero2 > numero1) && (numero2 > numero3))
 {
    printf("El segundo numero es el mayor \n", numero1, numero2, numero3);
 }

else
 {
 printf("El tercer numero es el mayor \n", numero1, numero2, numero3);
 }

system("pause");









}


