#include <stdio.h>
#include <stdlib.h>

main(){
	int op = 1;
	char opcao;
	int n1,n2;
	double resultado;
	while (op == 1){
		printf("ifome o 1 numero:");
		scanf("%d",&n1);
		printf("ifome o 2 numero:");
		scanf("%d",&n2);
		printf("ifome a operacao + - * / : \n");
		scanf("%s",&opcao);
		printf("\n");

		switch (opcao){
			case '+':
				resultado = n1 + n2;
				break;
			case '-':
				resultado = n1 - n2;
				break;
			case '*':
				resultado = n1 * n2;
				break;
			case '/':
				if(n2 != 0)
					resultado = n1 / n2;
				else
					printf("divisao por zero\n");
				break;
			default:
				break;
		}
		
		printf("Resultado e: %f.2 \n \a",resultado);

		printf("\n degite UM NUMERO 1 pra repite a operacao");
		scanf("%d",&op);
		system("cls");
	}

	 printf("\n \a");
	 system("pause");
}
