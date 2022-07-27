#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do valor ingresado,
imprimir los resultados
*/

int main()
{
int numero1;
int numero2;
int resultadoSuma;
int resultadoProducto;
int resultadoResta;
int Resultados;

printf("Ingrese el valor del primer valor\n");
scanf("%d",&numero1);

printf("Ingrese el valor del segundo valor\n");
scanf("%d", &numero2);

resultadoSuma = numero1 + numero2;
resultadoProducto = numero1 * numero2;
resultadoResta = numero1 - numero2;

printf("Resultado de la Suma: %d\n", resultadoSuma);
printf("Resultado del Prducto: %d\n", resultadoProducto);
printf("Resultado de la Resta: %d\n", resultadoResta);

system("pause");
return(0);

}






