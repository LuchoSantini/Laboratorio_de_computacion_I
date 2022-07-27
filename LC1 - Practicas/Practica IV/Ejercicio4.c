#include <stdio.h>
#include <stdlib.h>

void main()

{
    int i,j, cantAlumnos, cantParciales;
    float notaParcial, promedioGeneral, promedioAlumno;

    printf("Ingrese la cantidad de alumnos \n");
    scanf("%d", &cantAlumnos);
    printf("Ingrese la cantidad de parciales \n");
    scanf("%d", &cantParciales);
  

    for (i = 1; i <= cantAlumnos; i++)
    {
        printf("Alumno %d\n",i);
        {
        for (j = 1; j <=cantParciales; j++)
        {
            do
            {
            printf("Ingrese la nota del parcial %d \n",j);
            scanf("%f",&notaParcial);
            promedioAlumno = promedioAlumno + notaParcial; // Suma las notas para calcular el promedio
            }
            while(notaParcial <0 || notaParcial >10); // Valida las notas
        }
        promedioAlumno=promedioAlumno / cantParciales; // Calcula promedio por alumno
        printf("El promedio del alumno %d es %.2f \n",i,promedioAlumno);
        promedioGeneral=promedioGeneral+promedioAlumno; // Suma y guarda las notas
        promedioAlumno = 0; //Reinicia la memoria para promedioAlumno
        }
    }
    promedioGeneral=promedioGeneral/cantAlumnos; // Calcula el promedio general
    printf("El promedio general es: %.2f \n",promedioGeneral);

    system("Pause");
}