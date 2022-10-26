#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "portuguese-brazilian");

FILE *PTRARQ;
char RESP, FRASE[81];
RESP = 'S';
PTRARQ = fopen("FRASE2.TXT", "w");
while(RESP == 'S' || RESP == 's')
{
printf("\n\nDigite uma frase qualquer\n\n");

fflush(stdin);
fgets(FRASE, 81, stdin);
fputs(FRASE, PTRARQ);
printf("\nDeseja continuar (S/N)? ");
fflush(stdin);
scanf("%c", &RESP);
}
fclose(PTRARQ);

  system("pause");
  return 0;
}
