#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char url[] = "numero.txt";
    FILE *file;

    file = fopen(url, "r");
    if (file == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        system("pause");
        return 0;
    }
    int x, y, z;
    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("%i %i %i \n", x, y, z);
    fclose(file);

    system("pause");
    return 0;
}
