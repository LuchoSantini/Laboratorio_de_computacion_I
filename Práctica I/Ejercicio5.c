#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int ladoAltura1; 
    int ladoBase1; 
    double Diagonal;
    int Superficie;
    int Perimetro;

    printf("Ingrese el valor de la altura del Rectangulo \n");
    scanf("%d", &ladoAltura1);

    printf("Ingrese el valor de la base del Rectangulo \n");
    scanf("%d", &ladoBase1);

    Diagonal = (sqrt ((ladoAltura1 * ladoAltura1) + (ladoBase1 * ladoBase1)));
    Superficie = (ladoAltura1 * ladoBase1);
    Perimetro = ((ladoAltura1)* 2) + ((ladoBase1)* 2);

    printf("Diagonal: %lf\n", Diagonal);
    printf("Superficie: %d\n", Superficie);
    printf("Perimetro: %d\n", Perimetro);

    system("pause");
    return(0);

}
