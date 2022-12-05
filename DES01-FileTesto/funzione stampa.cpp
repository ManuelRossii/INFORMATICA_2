void stampa()
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

