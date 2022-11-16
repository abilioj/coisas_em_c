// ************************************************************
//   Exemplo de uso de arquivo texto
//   Este programa ler um arquivo texto e imprime o seu
//   conteudo na tela.
// ************************************************************
#include <stdio.h>
#include <conio.h>

void main()
{
  FILE *arq;
  char Linha[100];
  char *result;
  int i;
 // clrscr();

  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("ArqTeste.txt", "rt");
  if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }

  i = 1;
  while (!feof(arq))
  {
	// Ler uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' ler ate 99 caracteres ou ate o '\n'
      if (result)  // Se foi possivel ler
	  printf("Linha %d : %s",i,Linha);
      i++;
  }
  fclose(arq);
  
}
