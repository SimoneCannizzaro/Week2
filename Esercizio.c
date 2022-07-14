#include <stdio.h>
#include <stdlib.h>

int main ()
{
/*inizio ciclo*/
 while(1)
 {
/*variabili*/
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
    
    if(scelta!=1 && scelta!=2)
    {
    printf("inserisci un numero valido\n");
    }
    else
    {

    switch(scelta)
    {
         case 1:
         printf("\n Scegli il tuo nome\n"),
         scanf("%s", &nome);
       
      do
      {

         printf("\nQual'e' la capitale dell'Italia? \n");
         printf("\n 1) Parigi\n");
         printf("\n 2) Roma\n");
         printf("\n 3) Napoli\n");
         scanf("%d" , &r1); 
         if(r1==2)
         {
                  conta++;
         }
         else
         {
         (r1!=2);
         printf("risposta sbagliata\n");
         }

      }while(r1!=1 && r1!=2 && r1!=3);

      do
      {
         printf("\nQual'e' la capitale Brasile \n");
         printf("\n 1) Brasilia\n");
         printf("\n 2) Palermo\n");
         printf("\n 3) Bogota'\n");
         scanf("%d" , &r2);
         if(r2==1)
         {
                  conta++;
         }
         else
         {
         (r2!=1);
         printf("risposta sbagliata\n");
         }

      }while(r2!=1 && r2!=2 && r2!=3);

      do
      {

         printf("\nQual'e' la capitale dell'Argentina \n");
         printf("\n 1) Tirana \n");
         printf("\n 2) Baku\n");
         printf("\n 3) Buenos Aires\n");
         scanf("%d" , &r3);
         if(r3==3)
         {
                   conta++;
         }
         else
         {
         (r3!=3);
         printf("risposta sbagliata\n");
         }

      }while(r3!=1 && r3!=2 && r3!=3);

         printf("\n Il  punteggio di  %s e' %d\n", nome, conta);
         break;
         case 2:
         break;
         }
     }
    }while(scelta==2);
    return 0;
 } 
} 

