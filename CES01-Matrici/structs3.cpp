/***********************
Manuel Rossi           *      
4H                     *
05/10/2022             *
**********************/

//dichiarazione librerie
#include <stdio.h>   	
#include <stdlib.h> 

//definizione costanti
   
#define V 3 	    // numero di voti da inserire per ogni studente
#define S 50       //numero di caratteri disponibili per ogni singola stringa
#define N 2	      // numero di record dell' array
#define MAX 10   
#define MIN  0  


struct s_data
{
	int giorno;
	char mese[S];
	int anno;
	
	
	
}typedef s_data;




struct s_alunno     
{
	int matricola;     		
	char cognome[S];  	   
	int voti[V];          
	s_data nascita;
	
}typedef s_alunno;

void carica(s_alunno []);  

void stampa(s_alunno []); 

void media( s_alunno []); 

void carica(s_alunno st [])
{
	int i,j,media=1,s=0;

	for(i=0;i<N;i++)
	{
		
		printf("inserisci numero matricola\n");
		scanf("%d",&st[i].matricola);
		printf("\n\n");
		printf("inserisci il cognome\n");
		scanf("%s",st[i].cognome);
		printf("\n\n");
		
		printf("inserisci tre voti\n");
		
		for(j=0;j<V;j++)
		{	
			
			scanf("%d",&st[i].voti[j]);
		
		}
		
		
		printf("\n\n");
		printf("il giorno di nascita\n");
		scanf("%d",&st[i].nascita.giorno);
		printf("\n\n");
		printf("il mese\n");
		scanf("%s",st[i].nascita.mese);
		printf("\n\n");
		printf("l'anno\n"),
		scanf("%d",&st[i].nascita.anno);
		
	}
	
	
}

//funzione stampa
void stampa(s_alunno st [])
{
	int i,j;

	for(i=0;i<N;i++)
	{
		printf("numero matricola:");
		printf("\n\n");
		printf("%d",st[i].matricola);
		printf("\n\n");
		for(j=0;j<V;j++)
		{	
			printf("voti");
			printf("%d\n",st[i].voti[j]);
		
		}
		printf("inserisci il giorno di nascita");
		printf("%d\n",st[i].nascita.giorno);
		printf("\n\n");
		printf("inserisci il mese\n");
		printf("%s\n",st[i].nascita.mese);
		printf("\n\n");
		printf("inserisci l'anno\n"),
		printf("%d\n",st[i].nascita.anno);
		printf("\n\n");
			
	}
	
}
//funzioni media
void media( s_alunno  st [])
{
	int s,media=0,i,m=0,j;

	for(i=0;i<N;i++) 		
	{
			s=0;
			for(j=0;j<V;j++)
			{
				s=s+st[i].voti[j];
				
			}
			media=s/V;

		printf("la media:%d\n",media);
		
			
	}
	
	
	
	
}
int main()
 {
 	int i=0;
 	s_alunno studenti[N];
 	carica(studenti);
 	system("cls");
 	stampa(studenti);
 	media(studenti);
 	
 
 	
 	
 }
