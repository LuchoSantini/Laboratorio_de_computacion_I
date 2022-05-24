#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()

{
    int dni;
    float venta;
    venta = 4600;
    int numUsuario1;
    int numUsuario2;

    printf("Por favor, ingrese su DNI \n");
    scanf("%d", &dni);

  
    if (dni >= 10000000 && dni <= 99999999)
     {
      printf("Seleccione un metodo de pago \n");
      printf("1- Efectivo \n");
      printf("2- Tarjeta de Credito \n");
     }
     else
     {
         printf("Por favor, ingrese un DNI valido \n");
     }

     scanf("%d", &numUsuario1);
  
     if (numUsuario1 = 2)
    {
     printf("Seleccione una de las siguientes opciones \n");
     printf("1- Visa \n");
     printf("2- American Express \n");
     printf("3- Mercado Pago \n");
     printf("4- Cabal \n");
    }
    
    scanf("%d", numUsuario2);
      switch (numUsuario2)
     {
      case 1:
         printf("1- Visa \n");
         break;
      case 2:
          printf("2- American Express \n");
          break;
      case 3:
          printf("3- Mercado Pago \n");
          break;
      case 4:
          printf("4- Cabal \n");
          break; 
      default:
          printf("Seleccione un metodo de pago valido \n");
          break;
     }
    

   system("Pause");
     










}