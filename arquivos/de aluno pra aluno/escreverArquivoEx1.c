#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char url[] = "string.txt";
    FILE *file;

    file = fopen(url, "a");
    if (file == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        system("pause");
        return 0;
    }
    fprintf(file,"mais um textos1\n");

    char frase[] = "mais um textos2\n";
    fputs(frase,file);

    fputc('c',file);

    fclose(file);

    system("pause");
    return 0;
}
