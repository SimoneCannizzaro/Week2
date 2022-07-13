#include <stdio.h>
#include <stdlib.h>

int main ()
{
/* variabili*/

    int  scelta;
    char nome[19];
    int conta=0, x=0, y=0, z=0;

    printf("\n Il gioco sta per iniziare preparati\n");
    printf("\n Prova a rispondere a piu' domande possibili\n");
    
    do
    {
    printf("\n premi 1 per giocare\n");
    printf("\n premi 2  per uscire\n");

    scanf("%d", &scelta);

    switch(scelta)
    {
         case 1:
         printf("\n Scegli il tuo nome\n"),
         scanf("%s", &nome);
       
         printf("\nQual'e' la capitale dell'Italia? \n");
         printf("\n 1) Parigi\n");
         printf("\n 2) Roma\n");
         printf("\n 3) Napoli\n");
         scanf("%d" , &x); 
         if(x==2)
         {
                  conta++;
         }
         printf("\nQual'e' la capitale Brasile \n");
         printf("\n 1) Brasilia\n");
         printf("\n 2) Palermo\n");
         printf("\n 3) Bogota'\n");
         scanf("%d" , &y);
         if(y==1)
         {
                  conta++;
         }
         printf("\nQual'e' la capitale dell'Argentina \n");
         printf("\n 1) Tirana \n");
         printf("\n 2) Baku\n");
         printf("\n 3) Buenos Aires\n");
         scanf("%d" , &z);
         if(z==3)
         {
                   conta++;
         }
         printf("\n Il  punteggio di  %s e' %d\n", nome conta);
         break;
         case 2;
         break;
         }
    }while(scelta==1);
    return 0;
} 

