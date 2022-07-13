#include <stdio.h>
#include <stdlib.h>

int main ()
{
/* variabili*/

    int  scelta;
    char nome[19];
    int conta=0, r1=0, r2=0, r3=0;

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
         scanf("%d" , &r1); 
         if(r1==2)
         {
                  conta++;
         }
         printf("\nQual'e' la capitale Brasile \n");
         printf("\n 1) Brasilia\n");
         printf("\n 2) Palermo\n");
         printf("\n 3) Bogota'\n");
         scanf("%d" , &r2);
         if(r2==1)
         {
                  conta++;
         }
         printf("\nQual'e' la capitale dell'Argentina \n");
         printf("\n 1) Tirana \n");
         printf("\n 2) Baku\n");
         printf("\n 3) Buenos Aires\n");
         scanf("%d" , &r3);
         if(r3==3)
         {
                   conta++;
         }
         printf("\n Il  punteggio di  %s e' %d\n", nome, conta);
         break;
         case 2:
         break;
         }
    }while(scelta==2);
    return 0;
} 

