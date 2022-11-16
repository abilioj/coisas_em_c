#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file1 = fopen("string.txt","r");
    if (file1 == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        system("pause");
        return 0;
    }
    FILE *file2 = fopen("string2.txt","w");
    if (file2 == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        system("pause");
        return 0;
    }

    copiarCoteudo(file1,file2);
    fclose(file1);
    fclose(file2);

    system("pause");
    return 0;
}

void copiarCoteudo(FILE *file1, FILE *file2){
    char leitor[1000];
    while (fgets(leitor, 1000, file1) != NULL)
    fputs(leitor,file2);    
}