#include<stdio.h>
#include<stdlib.h>
main()
{
	int cont;
	int i;
	int l;
	int medio;
	int palindromo;
	char parola[100];
	printf("inserisci parola:\n");
	i=0;
	while(cont<100 || l==1){
		scanf("%d",&parola[cont]);
		if(parola[cont] == '13'){
			l=1;
		}
		cont++;
	}
	i=0;
	medio=cont/2;
	while(i<medio && palindromo==1){
		if(parola[cont]!=parola[i]){
			palindromo=0;
		}
		i++;
		cont--;
	}
    if(palindromo==1){
    	printf("\n palindromo");
	}else{
		printf("\n non palindromo");
	}
}
