#include <stdio.h>
#include <stdlib.h>

int main()

{
int a;
int b;
int hipotenusa;
int perimetro;
int superficie;

printf("Ingrese el valor de a \n");
scanf("%d",&a);
printf("Ingrese el valor de b \n");
scanf("%d", &b);

hipotenusa =  a * a + b * b;
perimetro = a + b + hipotenusa;
superficie = (a * b) /2;

printf("Hipotenusa = %d\n", hipotenusa);
printf("Perimetro = %d\n", perimetro);
printf("Superficie = %d\n", superficie);

system("pause");
return(0);
}