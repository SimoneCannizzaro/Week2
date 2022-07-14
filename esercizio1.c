#include <stdio.h>

int main ()
{
/* variabili */

   int numero;
   int add ;
   int men ;
 
   printf("\n Inserisci un numero intero \n");
   scanf("%d",&numero);
/* incremento e decremento */

   add = numero+1 ;
   men = numero-1 ;
   printf("\n Il  numero  precedente e' : %d \n",  men );
   printf("\n Il successivo e' : %d \n", add);

   return 0;
}

     
