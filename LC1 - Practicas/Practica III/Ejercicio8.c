#include <stdio.h>
#include <stdlib.h>

void main()

{
    int n1;
    int tabla;
    int ac;

    printf("Ingrese un numero para ver su tabla de multiplicar \n");
    scanf("%d", &tabla);
    printf("La tabla de multiplicar del %d es: \n", tabla);

    for (n1 = 1; n1 <=10; n1++)
    {
        ac = tabla * n1;
        printf("%d x %d = %d \n",tabla, n1, ac);
    }
}