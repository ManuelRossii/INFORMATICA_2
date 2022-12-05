#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define S 10

struct data
{
	int giorno;
	char mese [S];
	int anno;
	
}typedef data;

struct studente
{
	char cognome [S];
	int matricola;
	data nascita;
}typedef studente;

// funzione carica

void carica(char nomefile)
{
struct stud buffer;
int i;

//apertura file

for(i=0;i<dim;i++)
{
printf(“     “)
scanf(“%s”, buffer.cog);
//caricare altri campi

fwrite(&buffer, sizeof(struct stud), 1, f)
}
fclose; 
//chiusura file 
}

//funzione stampa

void stampa(char nomefile)
{
int err1;

FILE *pFile
//lettura del file di record

err1=fopen_s(&pFile, nomeFile, “rb”);
if(pFile)
{
printf(“\nCognome\t Nome \tdebiti”);
fread(&dato, sizeof(dato), 1, pFile);
while(!feof(pFile))
{
printf(“\n%s”, dato.cognome);
printf(“\t%s”, dato.nome);
printf(“\t%s”, dato.debiti);
fread(&dato, sizeof(dato), 1, pFile);
}
fclose(pFile);
}
else
printf(“il file non può essere aperto\n”);
};

//funzione ricerca

void ricerca(st[], fim, cog[])
{
struct stud BUFFER;
int i;
charc;
c=fopen(st[], “r”);
for(i=0;i<dim;i++)
{
fread(&buffer, sizeof(struct stud), 1, F1)
if(buffer[i].cog==cog)
{
//stampa informazioni studente;
fclose;
}
}
}


int main()
{
	int 
	
    carica(nomefile);

	stampa(nomefile);

	ricerca(nomefile);	
}


