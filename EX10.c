#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara variável
	 	double x;
	 		//Pede o dado o usuário
	 		printf("Digite o valor de X: ");
	 		 //Armazena o dado coletado do usuário na variável
			 scanf("%lf", &x);
		//Declara outra variável
		double y = x+5;
	     //Imprime o final do código
		 printf("O valor de Y é %.2lf\n", y);
}
