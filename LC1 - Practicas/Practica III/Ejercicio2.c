#include <stdio.h>

void main()

{
    int n1;
    int n2;
    n2 = 1;

    for (n1 = 1; n1 <= 5 ; n1++)
    {
        printf("%d\n", n2);
        n2 = n2 + 2;
    }
}