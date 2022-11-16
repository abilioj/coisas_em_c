#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char url[] = "string.txt";
    FILE *file;

    file = fopen(url, "w");
    if (file == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
    }
    else
    {
        fprintf(file,"pao com mortandela");
    }

    fclose(file);
    system("pause");
    return 0;
}
