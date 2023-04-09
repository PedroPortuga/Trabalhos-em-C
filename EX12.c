#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara variável
	 	int A;
	 		//Pede o dado ao usuário
	 		printf("Digite o valor de A: ");
	 		 //Armazena o dado coletado do usuário na variável
			 scanf("%d", &A);
		//Declara outra variável
		int B = (A/5)*(A+2);
		 //Imprime o final do código
		 printf("O valor de B é %d\n", B);
}
