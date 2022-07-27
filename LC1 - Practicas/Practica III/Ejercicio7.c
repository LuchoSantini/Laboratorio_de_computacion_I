#include <stdio.h>
#include <stdlib.h>

void main()

{
    int i;
    int suma = 0;
    for (i=1; i <=39; i++)
    {
        if (i % 2 == 1)
        suma = suma + i;
    }

    printf("%d\n", suma);
}