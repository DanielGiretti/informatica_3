#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
      int A;//primo valore
      int B;//secondo valore
      int C;//terzo valore
      int MAX;//il massimo trai 3 valori
      printf("scrivi il valore del primo numero");
      scanf("%d", &A);
      printf("scrivi il valore del secondo numero");
      scanf("%d", &B);
      printf("scrivi il valore del terzo numero");
      scanf("%d", &C);
      if(A>B){
              MAX=A;
              }
      else{
      MAX=C;
      }  
      if(C>MAX){
                MAX=C;
                }
      printf("\n MAX= %d", MAX);
      system("pause");
}
                 
