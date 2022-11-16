#include <stdio.h>
#include <conio.h>

void main()
{
  FILE *arq;
  char Linha[100];
  char *result;
  int i;
  char nome[40],cpf[12];
 // clrscr();

  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("dadosPacientes.txt", "rt");
  if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }

  i = 1;
  while (fscanf(arq,"%s %s %d",nome,cpf,&i) != -1)
  {
    printf("%s %s %d\n",nome,cpf,i);
  }
  fclose(arq);
  
}
