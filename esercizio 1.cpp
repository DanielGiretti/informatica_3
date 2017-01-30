/*-1 scrivere un programma in pseudo e in c che dato un vettore di k elementi con
     k compreso tra n1 e n2 con n2 minore di 1000 e dispari e uno scalare num 
     intero effettui il prodotto tra lo scalare e il vettore.*/
     //giretti daniel   3 ina
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
      int vet[999];
      int n1;
      int n2;
      int num;
      int k;
      int i;
      int p;
      do{
          printf("inserisci n2 minore di 1000 e dispari");
          scanf("%d",&n2);
      }while((n2>1000)||(n2%2==0));
      do{
          printf("inserisci n1 minore di n2");
          scanf("%d",&n1);
      }while(n1>n2);
      do{
          printf("inserisci il numero di elementi");
          scanf("%d",&k);
      }while((k<n1)||(k>n2));
      printf("inserisci un numero");
      scanf("%d",&num);
      for(i=0;i<k;i++){
          printf("inserisci un valore");
          scanf("%d",&vet[i]);
          }
      for(i=0;i<k;i++){
         p=num;              
         p*=vet[i];
         printf("%d",p);
          }
         system("PAUSE");
}
                
