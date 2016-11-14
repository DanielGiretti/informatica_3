#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int A;//primo numero
	int B;//secondo numero
	int C;//variabile d'appoggio
	printf("\n inserisci il valore di A");
	scanf("%d",&A);
	printf("\n inserisci il valore di B");
	scanf("%d",&B);
	C=B;
	B=A;
	A=C;
	printf("A= %d",A);
	printf("B= %d",B);
}
