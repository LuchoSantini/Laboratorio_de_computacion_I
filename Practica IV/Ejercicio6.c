#include <stdio.h>
#include <stdlib.h>

void main()

{
    float notaAlumno, suma , promedio;
    int contadorNotas = -1;
    suma = 0;
    

    printf("Ingrese las notas, si desea finalizar ingrese el 0 \n", notaAlumno);
    do
    {
        printf("Ingrese la nota \n");
        
        do
        {
         scanf("%f", &notaAlumno);

          if (notaAlumno < 0 || notaAlumno > 10)

         printf("Ingrese una nota valida \n");

        } while (notaAlumno < 0 || notaAlumno > 10);
        contadorNotas++;
        suma = suma + notaAlumno;

    } while (notaAlumno != 0);
    promedio = suma / contadorNotas;

    printf("La suma es %.2f \n", suma);
    printf("El promedio es %.2f \n", promedio);

}