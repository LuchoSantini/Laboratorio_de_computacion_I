#include <stdio.h>
#include <stdlib.h>
/*
Programa que toma los lados de un triangulo y calcula su perimetro
*/

int main()
{
    int a;
    int b;
    int c;
    int perimetro;

    printf("Ingresar valor de a \n");
    scanf("%d" ,&a);
     printf("Ingresar valor de b \n");
    scanf("%d" ,&b);
     printf("Ingresar valor de c \n");
    scanf("%d" ,&c);
    perimetro = a + b + c;
    printf("Perimetro = %d\n", perimetro);
     system("Pause");
    return(0);

}
