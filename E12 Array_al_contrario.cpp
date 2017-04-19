#include<stdio.h>
#include<stdlib.h>
main()
{
	int x;
	int numeri[10];
	printf("inserisci un array di 10 numeri\n");
	for(x=0;x<10;x++){
		printf("inserisci numero: ");
		scanf("%d",&numeri[x]);
	}
	printf("\narray al contrario:\n");
	for(x=9;x>=0;x--){
		printf("%d\n",numeri[x]);
	}
}
