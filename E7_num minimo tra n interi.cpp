#include<stdio.h>
#include<stdlib.h>
#include<MATH.h>
main()
{
	int I;
	int num;
	int n;
	int min;
	printf("inseri il numero di numeri");
	scanf("%d",&n);
	I=1;
	printf("inserisci un numero ");
	scanf("%d",&min);
	while(I<n){
		printf("inserisci un numero");
		scanf("%d",&num);
		if(num<min){
			num=min;
		}
		I++;
	}
	printf("il numero minore è: %d",min);
}
