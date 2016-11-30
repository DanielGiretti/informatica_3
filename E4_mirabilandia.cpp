#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
main()
{
char dis;//disabilità
char acc;//accompagnatore
int eta;//variabile che contiene l'eta
int altezza;//variabile che contiene l'altezza
char sup_beach;//variabie che contiene il supplemento per i maggiorenni
char sup_beach_rid;//variabile che contiene il supplemento per i bambini
int prezzo;//perzzo
    printf("\nè disabile?  s=SI n=NO");
    scanf("%c", &dis);
    if(dis=='s')
        printf("paga=0");
    else
    {   
        printf("è un accompagnatore? s=SI n=NO");
        scanf("%c",acc);
        if(acc='s')
        {   
            prezzo=25;
			printf("prezzo=25"); 
		}
		else
		{
	        printf("inserisci eta");
	        scanf("%d",&eta);
	        if(eta>=60)
	        {
	            printf("prezzo=25");
		        prezzo=25;
	        }
		    else
		    {	   
	            printf("inserisci altezza in centimetri");
			    scanf("%d",&altezza);
			    if(altezza<=100)        //per bambino piccolo
			    printf("gratis");
			    else
			    {
		            if(altezza>=100&&altezza<=140)
		            {
				        printf("prezzo=28");
					    prezzo=28;
				        printf("\naggiunta supplemento beach? s=SI n=NO");
				        scanf("%c",sup_beach_rid);
				        if(sup_beach_rid=='s')   //supplemento bambino
				        {
				            prezzo=prezzo+7.5;
				            printf("prezzo=%d",prezzo);
				        }
				        else
				        {
					        printf("prezzo=%d",prezzo); 
				        }
			        }
				    else 
				    {
					    printf("prezzo=34");
					    prezzo=34;
					    printf("\naggiunta supplemento beach? s=SI n=NO");
					    scanf("%c",&sup_beach);
					    if(sup_beach=='s')   //supplemento adulto
					    {
					        prezzo=prezzo+9.5;
					        printf("prezzo=%d",&prezzo);
				        }
				        else
				        {
				            printf("prezzo=%d",&prezzo);
					    }
			        }
		        }
		    }
	    }
	}
}		
