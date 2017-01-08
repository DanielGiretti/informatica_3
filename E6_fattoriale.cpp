#include<stdio.h>
main()
{
	int n;
	int fat;
	fat=1;
	printf("inserisci un numero");
	scanf("%d",&n);
	while(n>0){
		fat=fat*n;
		n--;
	}
	printf("fattoriale= %d",fat);
}
