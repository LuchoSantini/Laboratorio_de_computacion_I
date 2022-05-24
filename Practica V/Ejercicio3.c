#include <stdio.h>
#include <stdlib.h>

void main()

{
    int arreglo[5];
    int i, n, contador;
    contador = 0;

    printf("Ingrese los valores que iran el el arreglo \n");
    
    for (i = 0; i <= 4; i++)
    {
        printf("Digite el numero en la posicion %d\n", i+1);
        scanf("%d", &arreglo[i]);
    }

    printf("Digite el numero que quiere saber cuantas veces se repite: \n");
	scanf("%d", &n);
	for (i= 0 ; i <= 4; i++){
		if (n==arreglo[i]){
			contador++;
		}
	}

	printf("El numero %d, se repite %d veces \n", n, contador);
	system("Pause");

}