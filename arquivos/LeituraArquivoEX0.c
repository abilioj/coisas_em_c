#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *file;

  // Abre um arquivo TEXTO para LEITURA 
  file = fopen("ArqTeste.txt", "rt");
  if (file == NULL) // Se houve erro na abertura
  {
    printf("Problemas na abertura do arquivo\n");
    system("pause");
    exit(0);
  }

  char frase[100];

  while (fgets(frase, 100, file) != NULL)
  {
    printf("%s",frase);
  }
  fclose(file);

  system("pause");
}
