#include<stdio.h>
main()
{
	int N;
	int L;
	int I;
	int tab;
	
	N=2;
	L=0;
	while(L<=7){
	    N=N+1;
		I=1;
		while(I<=10){
			tab=N*I;
			printf("%d",tab);
			I++;
		}
		L++;
		printf("\n");	
	}
}
