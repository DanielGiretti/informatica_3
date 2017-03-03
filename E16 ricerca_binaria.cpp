#include<stdio.h>
#include<stdlib.h>
main()
{
    int n[]={1,3,4,6,7,11,15,16,17,20,22,24,27,30,33,34,40,41,45,60,}; 
    int num;
    int min;
    int max;
    int cen;
    int trov;
    int i;
    printf("inserisci numero da cercare:\n");
    scanf("%d",&num);
    min=0;
    max=19;
    trov=0;
    i=0;
    while(min<=max && trov==0){
    	cen=(min+max)/2;
    	if(num==n[cen]){
    		trov=1;
		}else{
			if(num>n[cen]){
				min=cen+1;
			}else{
				max=cen-1;
			}
		}
        i++;
	}
	if(trov==1){
		printf("numero trovato in posizione %d \n",cen);
	}else{
		printf("numero non trovato\n");
	}
	printf("numero passi=%d",i);
}
    
