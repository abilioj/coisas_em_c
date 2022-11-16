#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REG_ALUNO 100

typedef struct
{
    char nome[54];
    float notas[4];
    int ativo;
} Aluno;

Aluno alunos[MAX_REG_ALUNO];

void menu();
void cadastrar();
void remover();
void resprovados();
void pesquisar();
void listar();

int main(int argc, char const *argv[])
{

    menu();

    return 0;
}

void menu()
{
    int op;

    do
    {
        system("cls");
        printf("\t **** Menu de Opcoes **** ");
        printf("\n 1 - Cadastrar Aluno \n 2 - Remover Aluno \n 3 - Alunos Reprovados \n 4 - Pesquisar Aluno \n 5 - Listar Alunos \n 0 - Sair \n");
        scanf("%d", &op);

        getchar(); // fez a limpezar do buf

        switch (op)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            remover();
            break;
        case 5:
            listar();
            break;
        default:
            break;
        }
        getchar();
    } while (op != 0);
}

void cadastrar()
{
    char nome[54];
    float notas[4];
    int op;

    do
    {
        system("cls");
        printf("\t **** Cadastrar Aluno **** \n");
        printf("\n Digete o nome:");
        fgets(nome, sizeof(nome), stdin);
        printf("\n 1 Bimestre: ");
        scanf("%f", &notas[0]);
        printf("\n 2 Bimestre: ");
        scanf("%f", &notas[1]);
        printf("\n 3 Bimestre: ");
        scanf("%f", &notas[2]);
        printf("\n 4 Bimestre: ");
        scanf("%f", &notas[3]);

        for (int i = 0; i < MAX_REG_ALUNO; i++)
        {
            if (alunos[i].ativo == 0)
            {
                alunos[i].ativo = 1;
                alunos[i].notas[0] = notas[0];
                alunos[i].notas[1] = notas[1];
                alunos[i].notas[2] = notas[2];
                alunos[i].notas[3] = notas[3];
                strcpy(alunos[i].nome, nome); // pega o nome por referecia de memoria
                break;
            }
        }

        printf("\n 1 - Continuar \n 0 - Sair \n");
        scanf("%d", &op);

    } while (op != 0);
}

void listar()
{
    system("cls");
    printf("\t **** Lista Alunos ****\n");
    for (int i = 0; i < MAX_REG_ALUNO; i++)
    {
        if (alunos[i].ativo == 1)
        {
            printf("id: %d | ", i);
            printf("Nome: %s  | ", alunos[i].nome);
            printf(" 1 Bim: %0.2f  | ", alunos[i].notas[0]);
            printf(" 2 Bim: %0.2f  | ", alunos[i].notas[1]);
            printf(" 3 Bim: %0.2f  | ", alunos[i].notas[2]);
            printf(" 4 Bim: %0.2f  ", alunos[i].notas[3]);
            printf("\n ------------------- \n");
        }
    }
}

void remover() {    
    system("cls");
    printf("\t **** remove Aluno ****\n");

    int id;
    printf("digite o id:");
    scanf("%d",&id);

    alunos[id].ativo = 0;
    printf("excluido com sucesso \n");
    system("pause");
}
