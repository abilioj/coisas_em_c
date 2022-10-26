#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int x,contaCodigo1,contaCodigo2,contaCodigo3,contaCodigo4;

typedef struct dadosPessoais  
{
    int codigo;
    char nome[30];
    char curso[15];
    char cpf[20];
    int id;
    int idade;
    int tipo;
    int status;
}dadosPessoal;


     dadosPessoal dadoporfessor[100]; 
     dadosPessoal dado[100];
     
typedef struct dadoscursoturma
{
    int codigo;
    char nome[30];
    int tipo;
    int status;
}dadoscursoturma;

     dadoscursoturma dadocurso[100];
     dadoscursoturma dadoturma[100];

void listacurso(){
          system("cls");
    printf("\t**************Cadatros de Curso**************\n\n");
    printf("-> Curso cadatrados \n\n");
    for(x=1;x<=contaCodigo3;x++){
     printf("Codigo: %i\n",dadocurso[x].codigo);
     printf("Nome: %s\n",dadocurso[x].nome);            
               printf("Tipo 3 : Curson\n\n"); 
               }
}

void listaturma(){
          system("cls");
    printf("\t**************Cadatros de Turma**************\n\n");
    printf("-> Turma cadatrados \n\n");
    for(x=1;x<=contaCodigo4;x++){
     printf("Codigo: %i\n",dadoturma[x].codigo);
     printf("Nome: %s\n",dadoturma[x].nome);            
               printf("Tipo 4 : Turma\n\n"); 
               }
}

void dadosturma(){
    int rp,r;
     do{
     system("cls");
     printf("\t**************Cadatros de Turma**************\n\n\n\n"); 
       contaCodigo4++;
       dadoturma[contaCodigo4].codigo=contaCodigo4;  
     fflush (stdin);
    printf("Digite o Nome: ");
    gets(dadoturma[contaCodigo4].nome);
    dadoturma[contaCodigo4].tipo=4; 
        fflush (stdin);
    getch();
    system("cls");     
    printf("O Que Deseja :\n(1->ver o utimo cadatro feito ; 2->ver o todos cadatros feitos ;3->n%co)\n\n"),198;
    printf("->");
    scanf("%i",&r);
    if(r==1){
    system("cls");
    printf("\t**************Cadatros de Turma**************\n\n\n\n");
    printf("-> Curso cadatrado \n\n");
    printf("Codigo: %i\n",dadoturma[contaCodigo4].codigo);
    printf("\nNome: ");
    printf(dadoturma[contaCodigo4].nome); 
      printf("\nTipo 4 : Turma\n\n"); 
    getch();
    system("cls"); 
}
 fflush (stdin);
     if(r==2){     
       listaturma();  
    getch();
}
      fflush (stdin);
    system("cls");
     fflush (stdin);      
    printf("\t**************Cadatros de Turma**************\n\n\n\n");
    printf("Deseja fazer outro cadatro: (1->Sim ou 2->n%co)\n\n",198);
    printf("->");
    scanf("%i",&rp);  
    }while(rp<=1);
       fflush (stdin); 
    
}

void dadoscurso(){
    int rp,r;
     do{
     system("cls");
     printf("\t**************Cadatros de curso**************\n\n\n\n"); 
       contaCodigo3++;
       dadocurso[contaCodigo3].codigo=contaCodigo3;  
     fflush (stdin);
    printf("Digite o Nome: ");
    gets(dadocurso[contaCodigo3].nome);
    dadocurso[contaCodigo3].tipo=3; 
        fflush (stdin);
    getch();
    system("cls");     
    printf("O Que Deseja :\n(1->ver o utimo cadatro feito ; 2->ver o todos cadatros feitos ;3->n%co)\n\n"),198;
    printf("->");
    scanf("%i",&r);
    if(r==1){
    system("cls");
    printf("\t**************Cadatros de Curso**************\n\n\n\n");
    printf("-> Curso cadatrado \n\n");
    printf("Codigo: %i\n",dadocurso[contaCodigo3].codigo);
    printf("\nNome: ");
    printf(dadocurso[contaCodigo3].nome); 
      printf("\nTipo 3 : Curso\n\n"); 
    getch();
    system("cls"); 
}
 fflush (stdin);
     if(r==2){     
       listacurso();  
    getch();
}
      fflush (stdin);
    system("cls");
     fflush (stdin);      
    printf("\t**************Cadatros de Curso**************\n\n\n\n");
    printf("Deseja fazer outro cadatro: (1->Sim ou 2->n%co)\n\n",198);
    printf("->");
    scanf("%i",&rp);  
    }while(rp<=1);
       fflush (stdin); 
    
}   

void listaporfessor(){
         system("cls");
    printf("\t**************Cadatros de Porfessores**************\n\n");
    printf("-> Porfessores cadatrados \n\n");
    for(x=1;x<=contaCodigo2;x++){
     if(dadoporfessor[x].tipo ==2){
     printf("Codigo: %i\n",dadoporfessor[x].codigo);
               printf("Nome: %s\n",dadoporfessor[x].nome);
               printf("Curso: %s\n",dadoporfessor[x].curso);
               printf("CPF: %s\n",dadoporfessor[x].cpf);
               printf("IDentidade: %i\n",dadoporfessor[x].id);
               printf("Idade: %i\n",dadoporfessor[x].idade);             
               printf("Tipo 2 : Porfessor\n\n");
     }
               }
               }

void listaaluno(){
         system("cls");
    printf("\t**************Cadatros de Aluno**************\n\n");
    printf("-> Alunos cadatrados \n\n");
    for(x=1;x<=contaCodigo1;x++){
     printf("Codigo: %i\n",dado[x].codigo);
               printf("Nome: %s\n",dado[x].nome);
               printf("Curso: %s\n",dado[x].curso);
               printf("CPF: %s\n",dado[x].cpf);
               printf("IDentidade: %i\n",dado[x].id);
               printf("Idade: %i\n",dado[x].idade);             
               printf("Tipo 1 : Aluno\n\n"); 
               }             
               }      

void dadosaluno(){
    int rp,r;
     do{
     system("cls");
     printf("\t**************Cadatros de Aluno**************\n\n\n\n"); 
       contaCodigo1++;
       dado[contaCodigo1].codigo=contaCodigo1;  
     fflush (stdin);
    printf("Digite o Nome: ");
    gets(dado[contaCodigo1].nome);
    printf("Digite o curso: ");
    gets(dado[contaCodigo1].curso);
         fflush (stdin);
    printf("digite o CPF:");
    gets(dado[contaCodigo1].cpf);
     fflush (stdin);
    printf("digite o IDentidade:");
    scanf("%i",&dado[contaCodigo1].id);
    printf("Digite a Idade: ");
    scanf("%i",&dado[contaCodigo1].idade);
    dado[contaCodigo1].tipo=1; 
        fflush (stdin);
    getch();
    system("cls");     
    printf("O Que Deseja :\n(1->ver o utimo cadatro feito ; 2->ver o todos cadatros feitos ;3->n%co)\n\n"),198;
    printf("->");
    scanf("%i",&r);
    if(r==1){
    system("cls");
    printf("\t**************Cadatros de Aluno**************\n\n\n\n");
    printf("-> Aluno cadatrado \n\n");
    printf("Codigo: %i\n",dado[contaCodigo1].codigo);
    printf("\nNome: ");
    printf(dado[contaCodigo1].nome);
    printf("\nCurso: ");
    printf(dado[contaCodigo1].curso);
    printf("\nCPF:");
    printf(dado[contaCodigo1].cpf);
    printf("\nIDentidade:");
    printf("%i",dado[contaCodigo1].id); 
    printf("\nDigite a Idade: ");
    printf("%i",dado[contaCodigo1].idade); 
      printf("\nTipo 1 : Aluno\n\n"); 
    getch();
    system("cls"); 
}
 fflush (stdin);
     if(r==2){     
       listaaluno();  
    getch();
}
      fflush (stdin);
    system("cls");
     fflush (stdin);      
    printf("\t**************Cadatros de Aluno**************\n\n\n\n");
    printf("Deseja fazer outro cadatro: (1->Sim ou 2->n%co)\n\n",198);
    printf("->");
    scanf("%i",&rp);  
    }while(rp<=1);
       fflush (stdin); 
}

void dadosporfessor(){
    int rp,r;
     do{
     system("cls");
     printf("\t**************Cadatros de Porfessor**************\n\n\n\n"); 
       contaCodigo2++;
       dadoporfessor[contaCodigo2].codigo=contaCodigo2;  
     fflush (stdin);
    printf("Digite o Nome: ");
    gets(dadoporfessor[contaCodigo2].nome);
    printf("Digite o curso: ");
    gets(dadoporfessor[contaCodigo2].curso);;
         fflush (stdin);
    printf("digite o CPF:");
    gets(dadoporfessor[contaCodigo2].cpf);
     fflush (stdin);
    printf("digite o IDentidade:");
    scanf("%i",&dadoporfessor[contaCodigo2].id);
    printf("Digite a Idade: ");
    scanf("%i",&dadoporfessor[contaCodigo2].idade);
    dadoporfessor[contaCodigo2].tipo=2; 
        fflush (stdin);
    getch();
    system("cls");     
    printf("O Que Deseja :\n(1->ver o utimo cadatro feito ; 2->ver o todos cadatros feitos ;3->n%co)\n\n"),198;
    printf("->");
    scanf("%i",&r);
     fflush (stdin);
    if(r==1){
    system("cls");
    printf("\t**************Cadatros de Porfessor**************\n\n\n\n");
    printf("-> Porfessor cadatrado \n\n");
    printf("Codigo: %i\n",dado[contaCodigo2].codigo);
    printf("\nNome: ");
    printf(dadoporfessor[contaCodigo2].nome);
    printf("\nCurso: ");
    printf(dadoporfessor[contaCodigo2].curso);
    printf("\nCPF:");
    printf(dadoporfessor[contaCodigo2].cpf);
    printf("\nIDentidade:");
    printf("%i",dadoporfessor[contaCodigo2].id); 
    printf("\nDigite a Idade: ");
    printf("%i",dadoporfessor[contaCodigo2].idade); 
      printf("Tipo 2: Porfessor\n\n"); 
    getch();
    system("cls"); 
} 
fflush (stdin);
     if(r==2){     
      listaporfessor() ; 
    getch();
}
      fflush (stdin);
    system("cls");      
    printf("\t**************Cadatros de Porfessor**************\n\n\n\n");
    printf("Deseja fazer outro cadatro: (1->Sim ou 2->n%co)\n\n",198);
    printf("->");
    scanf("%i",&rp);    
    }while(rp<=1);
       fflush (stdin);
}

void menu(){
 int op,opc1,opc2;
        fflush (stdin);
      do{
         system("cls");    
      printf("\n\t******* SISTEMA DE DIAGN%cSTICODID%cTICO PEDAG%cGICO DO CEPA *******\n\n\n",162,181,162);               
       printf("\t                           menu principal\n\n\n");
       printf("Escolha op%c%co:\n",135,198);
       printf("\n\t1->Cadatros de Aluno\n\t2->Cadatros de Porfessor\n\t3->Cadatros de Curso\n\t4->Cadatros de Turma\n\t5->exit \n\n");
       printf("->");
       scanf("%i",&op);
       switch(op){
       case 1 : 
         do {
               fflush (stdin);
            system("cls");
            printf("\n\t******* SISTEMA DE DIAGN%cSTICODID%cTICO PEDAG%cGICO DO CEPA *******\n\n\n",162,181,162);            
            printf("Menu de Cadratros de Aluno\n\n\n");
       printf("Escolha op%c%co:\n",135,198);
       printf("\n\t1->Cadatros de Aluno\n\t2->Listar cadatros de Aluno\n\t3->Retorna ao menu principal \n\n");
       fflush (stdin);printf("->");
       scanf("%i",&opc1);
       switch(opc1){
       case 1 :   
               fflush (stdin);
       dadosaluno();
       fflush (stdin);
       break;
         case 2 :     
       fflush (stdin);   
      listaaluno();
      getch();
          break;         
      case 3 :     
       fflush (stdin);   
       menu();       
      break;
       } 
       } while(opc1<=2); 
       break; 
        case 2 : 
            do{
               fflush (stdin);
            system("cls"); 
       printf("\n\t******* SISTEMA DE DIAGN%cSTICODID%cTICO PEDAG%cGICO DO CEPA *******\n\n\n",162,181,162);                 
            printf("Menu de Cadatros de Porfessor\n\n\n");
       printf("Escolha op%c%co:\n",135,198);
       printf("\n\t1->Cadatros de Porfessor\n\t2->listar cadatros de Porfessor\n\t3->Retorna ao menu principal \n\n");
       fflush (stdin);printf("->");
       scanf("%i",&opc2);
       switch(opc2){
       case 1 :   
               fflush (stdin);
        dadosporfessor();
         fflush (stdin);
       break;
         case 2 :        
       fflush (stdin);   
    listaporfessor();
        getch();
       break;
         case 3 :     
       fflush (stdin);   
       menu();
       break;
       }  
       } while(opc2<=2);
       break;
       case 3 : 
            do{
               fflush (stdin);
            system("cls"); 
       printf("\n\t******* SISTEMA DE DIAGN%cSTICODID%cTICO PEDAG%cGICO DO CEPA *******\n\n\n",162,181,162);                 
            printf("Menu de Cadatros de Curso\n\n\n");
       printf("Escolha op%c%co:\n",135,198);
       printf("\n\t1->Cadatros de curso\n\t2->listar cadatros de curso\n\t3->Retorna ao menu principal \n\n");
       fflush (stdin);printf("->");
       scanf("%i",&opc2);
       switch(opc2){
       case 1 :   
               fflush (stdin);
        dadoscurso();
         fflush (stdin);
       break;
         case 2 :        
       fflush (stdin);   
    listacurso();
        getch();
       break;
         case 3 :     
       fflush (stdin);   
       menu();
       break;
       }  
       } while(opc2<=2);
       break;
       case 4 : 
            do{
               fflush (stdin);
            system("cls"); 
       printf("\n\t******* SISTEMA DE DIAGN%cSTICODID%cTICO PEDAG%cGICO DO CEPA *******\n\n\n",162,181,162);                 
            printf("Menu de Cadatros de Turma\n\n\n");
       printf("Escolha op%c%co:\n",135,198);
       printf("\n\t1->Cadatros de Turma\n\t2->listar cadatros de Turma\n\t3->Retorna ao menu principal \n\n");
       fflush (stdin);printf("->");
       scanf("%i",&opc2);
       switch(opc2){
       case 1 :   
               fflush (stdin);
        dadosturma();
         fflush (stdin);
       break;
         case 2 :        
       fflush (stdin);   
    listaturma();
        getch();
       break;
         case 3 :     
       fflush (stdin);   
       menu();
       break;
       }  
       } while(opc2<=2);
       break;
       case 5 :
       exit(0);
       break;     
       default:
       printf("\n\t******* SISTEMA DE DIAGN%cSTICODID%cTICO PEDAG%cGICO DO CEPA *******\n\n\n",162,181,162);
               system("cls");
               printf("Voc%c escolheu uma opera%c%co invalida!!!\n\n",136,135,198);
                getch();    
       break;
              }     
       } while(op!=2);   
             
}     
main(){
  setlocale(LC_ALL, "portuguese-brazilian");
    contaCodigo1=0;
    contaCodigo2=0;
    system("color 4f");//4f 20
    printf("\n\n");
    printf("\t******* SISTEMA DE DIAGNÓSTICO DIDÁTICO PEDAGÓGICO DO CEPA *******\n\n\n");
    printf("\tCRIADO PELOS PROGRAMADORES\n\tAB%cLIO JOS%c GOMES FERREIRA e ALEF LWISLEY GOMES. \n",161,130);
    printf("\tPROJETO E CRIA%c%cO EM 04/10/2011 E FINALIZA%c%cO EM **/**/2011.\n\n\n\n",128,199,128,199);
    printf("\tUSUARIO CASO QUERA TELA CEIA PERSSONE ''ALT+ENTER''.\n\n\n\n\n\n\n\t");
    system("pause");
       
	menu();

}

