#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char url[] = "string.txt";
    FILE *file;

    file = fopen(url, "r");
    if (file == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        system("pause");
        return 0;
    }

    char frase[100];

    while (fgets(frase, 100, file) != NULL)
    {
        printf("%s", frase);
    }
    fclose(file);
    printf("\n\n");
    system("pause");
    return 0;
}
