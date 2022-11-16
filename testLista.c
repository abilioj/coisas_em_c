#include <stdio.h>
#include <stdlib.h>

//- Estrutuda de dados de paciente
typedef struct dados_paciente {
    char nome[200];
    char email[200];
    int numero, diaNas, mesNas, anoNas;
    char cpf[11], telefone[15], cep[10], diaDiag[11];
    char rua[200], bairro[200], cidade[200], estado[200], comorbidade[10], quais[200];
//    struct dados_paciente *prox;
} Paciente;
struct dados_paciente paciente;

int main(){

	Paciente *lista = (Paciente*) malloc(sizeof(Paciente));
	if(!lista){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}

	int op = 0;
	do{
		 printf("\n\tNome:");
        scanf(" %30[^\n]s", &paciente.nome);
        printf("\n\tCPF:");
        scanf(" %30[^\n]s", &paciente.cpf);;
        printf("\n\tTelefone:");
        scanf(" %30[^\n]s", &paciente.telefone);
        printf("\n\tEmail:");
        scanf(" %30[^\n]s", &paciente.email);
        printf("\n\tData de nascimento:");
        printf("\n\tDia: ");
        fflush(stdin);
        scanf("%d", &paciente.diaNas);
        printf("\n\tMes: ");
        fflush(stdin);
        scanf("%d", &paciente.mesNas);
        printf("\n\tAno: ");
        fflush(stdin);
        scanf("%d", &paciente.anoNas);
        printf("\tCEP: ");
        scanf(" %30[^\n]s", &paciente.cep);
        printf("\tRua: ");
        scanf(" %30[^\n]s", &paciente.rua);
        printf("\tNumero: ");
        scanf("%d", &paciente.numero);
        printf("\tBairro: ");
        scanf(" %30[^\n]s", &paciente.bairro);

        printf("\tCidade: ");
        scanf(" %30[^\n]s", &paciente.cidade);

        printf("\tEstado: ");
        scanf(" %30[^\n]s", &paciente.estado);
                
        printf("\n\n\n\n Digite: 1) - Para Cadastrar novamente um Paciente ou 0) - Sair dessa opcao\n");
        scanf("%d", &op);
        
        
	}while(op!=0);
	
    system("pause");
    return 0;
}
