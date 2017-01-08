#include<stdio.h>
#include<stdlib.h>
#include<MATH.h>
main()
{
	int n;
	int num;
	int somma;
	int i;
	int media;
	printf("inserisciil la quantità di numeri");
	scanf("%d",&n);
	i=0;
	while(i<=n){
		printf("inserisci un numero");
		scanf("%d",&num);
		somma=somma+num;
		i++;
	}
	media=somma/n;
	printf("media = %d",media);
}
