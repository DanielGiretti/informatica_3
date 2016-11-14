#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
main()
{
	int SOMMA;//variabie somma
	int I;//variabile contatore
	SOMMA=0;
	I=1;
	while(I<=100){
		SOMMA=SOMMA+1;
		I=I+1;
	}

	printf("SOMMA= %d",SOMMA);
}
