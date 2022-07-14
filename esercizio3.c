#include <stdio.h>

int main ()
{
/* variabili */

   int num ;
/* inserimento numero */

   printf("inserisci il tuo numero \n");
   scanf("%d",& num);
/* funzione per vedere se e' negativo o positivo */

/* diamo per ipotesi che 0 sia positivo */

   if(num>=0)

   printf(" Il tuo numero e' positivo \n");

   else
/* output risultato */

   printf("Il tuo numero e' negativo \n");

   return 0;

}
