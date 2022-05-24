#include <stdio.h>

void main()

{
    int i;
    int ac = 0;

    for (i = 1; i <= 20; i= i+2)
    {
         ac = ac + i;
    }
printf("%d", ac);
}