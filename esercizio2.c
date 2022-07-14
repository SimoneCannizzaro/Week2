#include <stdio.h>

int main ()
{  
/* variabili */

   int num1 , num2 ;
   float media ;
/* inserimento numeri */

   printf("\n Inserisci il primo numero \n");
   scanf("%d", &num1);
   
   printf("\n Inserisci il secondo numero \n");
   scanf("%d" , &num2);
/*media */
   
   media = (float) (num1+num2)/2;
   printf("la media e': %f" , media);

   return 0 ;
}

