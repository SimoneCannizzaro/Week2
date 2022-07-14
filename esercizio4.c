#include <stdio.h>


int main()
{
/* variabili */
    int num;
    int  cont , somma = 0 ; 
    float media ;

/* inserimento input */
    
    printf(" Inserisci un numero \n");
    scanf("%d", &num);
    cont++ ;
/* funzione */
    
    while(num != 0)
     {

      printf(" Inserisci un numero \n");
      scanf("%d", &num);
      somma = somma + cont ;
     }
/* output */

     media=(float) somma/cont;
     printf("La media e':%f", media );
     
    
return 0;

}
