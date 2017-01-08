#include<stdio.h>
main()
{
	int n;
	int i;
	int tab;
	do{
	printf("inserisci il numero tra 2 e 10");
	scanf("%d",&n);
    }while((n>10)||(n<2));
    i=1;
    while(i<=10){
    	tab=n*i;
    	printf("%d",tab);
    	i++;
	}
}
