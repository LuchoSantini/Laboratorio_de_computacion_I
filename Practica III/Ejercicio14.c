#include <stdio.h>
#include <stdlib.h>

void main()

{
    int i,j;

    printf("Escribe un numero \n");
    scanf("%d", &j);

    for (i = j; i >=1; i--)
    {
    for (j = 1; j <=i; j++)

        printf("%d ",j);
        printf("\n");
    }
    
}