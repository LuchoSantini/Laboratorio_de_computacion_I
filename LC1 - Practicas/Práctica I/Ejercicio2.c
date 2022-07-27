#include <stdio.h>
#include <stdlib.h>
/*
Programa que toma tres valores, los suma e imprime el resultado.
*/

int main()
{
    int a;
    int b;
    int c;
    int resultado;

    printf("Ingresar valor de a \n");
    scanf("%d" ,&a);
     printf("Ingresar valor de b \n");
    scanf("%d" ,&b);
     printf("Ingresar valor de c \n");
    scanf("%d" ,&c);
    resultado = a + b + c;
    printf("Resultado de sumar a b c:%d\n", resultado);
     system("Pause");
    return(0);

}