#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara vari�vel
	 	double x;
	 		//Pede o dado o usu�rio
	 		printf("Digite o valor de X: ");
	 		 //Armazena o dado coletado do usu�rio na vari�vel
			 scanf("%lf", &x);
		//Declara outra vari�vel
		double y = x+5;
	     //Imprime o final do c�digo
		 printf("O valor de Y � %.2lf\n", y);
}
