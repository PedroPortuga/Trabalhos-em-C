#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara vari�vel
	 	int A;
	 		//Pede o dado ao usu�rio
	 		printf("Digite o valor de A: ");
	 		 //Armazena o dado coletado do usu�rio na vari�vel
			 scanf("%d", &A);
		//Declara outra vari�vel
		int B = (A/5)*(A+2);
		 //Imprime o final do c�digo
		 printf("O valor de B � %d\n", B);
}
