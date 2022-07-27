scanf("%d", &metdPag);
        if(metdPag == 1)
    printf("Hola \n");
    if 
        (metdPag == 2)
         printf("Ingrese una de las siguientes tarjetas \n");
         switch (metdPag)
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
    }
    else
     printf("Ingrese un DNI valido \n");
}