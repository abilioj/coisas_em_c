#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char url[] = "char.txt";
    char ch;
    FILE *arq;

    arq = fopen(url, "a");
    if (arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        do
        {
            printf("Caractere: ");
            ch = getchar();
            fflush(stdin);

            fputc(ch, arq);
        } while (ch != '\n');

    fclose(arq);

    return 0;
}
