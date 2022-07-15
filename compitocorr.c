#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main ()

{
         char scelta = '\0' ;   //Qui non vanno le parentesi graffe
         menu ();
         scanf("%c", &scelta);   //  Qui ho messo  %c perchè scelta non e' un intero
      
         switch (scelta)
         {
                 case 'A' :
                 moltiplica();
                 break;

                 case 'a':       //Qui ho messo la possibilità di inserire una lettera minuscola
                 moltiplica();
                 break;

                 case 'B' :
                 dividi();
                 break;

                 case 'b' :
                 dividi();
                 break;

                 case 'C':
                 ins_string();
                 break;
                 case 'c' :
                 ins_string();
                 break;
                 default :
                 printf("***Errore***\n Inserisci un numero valido\n"); //Qui c'e' il messaggio in caso di scelta sbagliata
                 scanf("%s", &scelta);
                 break;
         }
     
return 0;

}

void menu ()

{
          printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
          printf ("Come posso aiutarti?\n");
          printf("A >> Moltiplicare due numeri \n B >> Dividere due numeri\n C >> Inserire una stringa\n");
}

void moltiplica ()

{
        short  int  a , b = 0  ; 
        printf("\nInserisci i due numeratori da moltiplicare: \n");
        scanf("%hd", &a);
        scanf("%hd", &b);
        
        short int prodotto = a * b;
        printf("Il prodotto tra %d e %d e': %d", a , b , prodotto);
        
}

void dividi ()
{
        int a , b = 0 ;
        printf("Inserisci il numeratore : \n");
        scanf("%d", &a);
        printf("Inserisci il denominatore : \n");
        scanf("%d", &b);
        
        float  divisione = (float) a / b ; //Qui ho castato cosi' il risultato puo' essere non intero
        printf("La divisione tra %d e %d e ': %f", a ,  b , divisione );
        
}

void ins_string ()
{
         char stringa[10];
         printf("Inserisci la stringa :");
         scanf("%c", &stringa); 
         fgets (stringa , 10 , stdin); //Ho aggiunto fgets per limitare il numero di caratteri inseribili 
}
