#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "portuguese-brazilian");

	FILE *PTRARQ;
	char FRASE[81];
	PTRARQ = fopen("FRASE2.txt", "r");
	while(fgets(FRASE, 80, PTRARQ) != NULL)
	printf("%s", FRASE);
	fclose(PTRARQ);

  system("pause");
  return 0;
}
