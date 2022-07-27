#include <stdio.h>
#include <stdlib.h>

void main()

{
    int i;
    int suma = 0;
    for (i = 3; i <= 30; i=i+3)
    {
        if (i % 3 == 0)
        suma = suma + i;
    }
    printf("%d\n", suma);

    system("Pause");
}