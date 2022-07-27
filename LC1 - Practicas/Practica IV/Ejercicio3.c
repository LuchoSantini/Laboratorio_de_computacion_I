#include <stdio.h>
#include <stdlib.h>

void main()

{
    int num, suma = 0;
    int i;

    printf("Ingrese 10 numeros positivos \n \n");

    for (i = 1; i <=10; i++)
    {
      do
        {    
            printf("Ingrese el numero %d \n",i);
            scanf("%d", &num);
            suma = suma + num;
        }
      while (num <= 0);
        
    }
    printf("La suma es %d\n",suma);    

    system("Pause");
}