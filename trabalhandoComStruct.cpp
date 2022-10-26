#include <stdio.h>
#include <stdlib.h>

int contaCodigo;

typedef struct dadosPessais{
        int codigo;        
        char nome[60];
        char endereco[160];
        char profissao[40];
        int idade;
        int tipoDado;        
} dadoPessoal;

dadoPessoal dado[100];

void cliente(){
       fflush(stdin);       
       printf("------ CLIENTE -------\n\n");
       contaCodigo++;//3
       dado[contaCodigo].codigo=contaCodigo;    
       printf("Digite o nome: ");
       gets(dado[contaCodigo].nome);
       printf("Digite o enderco: ");
       gets(dado[contaCodigo].endereco);
       printf("Digite a profissao: ");
       gets(dado[contaCodigo].profissao);
       printf("Digite a idade: ");
       scanf("%i",&dado[contaCodigo].idade);
       dado[contaCodigo].tipoDado=1; 
}

void lista(int opcao){
     int x;
      for(x=1;x<=contaCodigo;x++){
           if(dado[x].tipoDado==opcao){ 
               printf("Codigo: %i\n",dado[x].codigo);
               printf("Nome: %s\n",dado[x].nome);
               printf("Endereco: %s\n",dado[x].endereco);
               printf("Profissao: %s\n",dado[x].profissao);
               printf("Idade: %i\n",dado[x].idade);
               if(opcao==1){
                            printf("Tipo: Cliente\n\n"); 
               }
               if(opcao==2){
                            printf("Tipo: Funcionario\n\n"); 
               }
           }
       }  
}

void funcionario(){
       fflush(stdin);       
       printf("------ FUNCIONARIO -------\n\n");
       contaCodigo++;
       dado[contaCodigo].codigo=contaCodigo;    
       printf("Digite o nome: ");
       gets(dado[contaCodigo].nome);
       printf("Digite o enderco: ");
       gets(dado[contaCodigo].endereco);
       printf("Digite a profissao: ");
       gets(dado[contaCodigo].profissao);
       printf("Digite a idade: ");
       scanf("%i",&dado[contaCodigo].idade);
       dado[contaCodigo].tipoDado=2; 
}

main(){
      int opc;
      int repete;      
      contaCodigo = 0;
      
      do{
      system("cls");
      printf("---------- SISTEMA LEGAL ------------\n\n\n");
      printf("Menu Principal\n");
      printf("1 Cliente\n");
      printf("2 Funcionario\n\n");
      printf("Digite sua opcao: ");
      scanf("%i",&opc);
      
      switch (opc){
             case 1:                  
                  cliente();
                  lista(opc);
             break;
             case 2:
                  funcionario();
                  lista(opc);
             break;
             default:
                    printf("Voce escolheu uma opcao invalida"); 
             break;       
      }
      printf("Deseja fazer outra operacao? ");
      printf("1 para sim 2 para nao");
      scanf("%i", &repete);
      }while(repete == 1);
  
      system("pause");      
}
