#include <stdio.h>
#include <stdlib.h>

void main()

{
    int cantAlumnos, promAlumnos, promGeneral, nota;
    int i,j;

    cantAlumnos = 5;
    promAlumnos = 0;
    promGeneral = 0;

    printf("Calcular el promedio de cada alumno y luego el promedio general \n");

    for(i = 1; i <= 5; i++)
    {
        promAlumnos=0;
        printf("Alumno nro %d \n", i);

        for (j = 1; j <=3; j++)
        {
            printf("Nota %d del alumno %d: \n", j, i);
            scanf("%d", &nota);
            promAlumnos=promAlumnos + nota;
        }
        promAlumnos=promAlumnos/3;
        printf("Promedio del alumno nro %d = %d \n",i,promAlumnos);
        promGeneral=promGeneral+promAlumnos;
    }

 promGeneral=promGeneral/cantAlumnos;
 printf("El promedio general es: %d \n",promGeneral);

system("Pause");
}