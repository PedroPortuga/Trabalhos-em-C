#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara as vari�veis
	 	int n1, n2, n3;
	 	//Pede o dado ao usu�rio
	 	printf("Digite o primeiro valor: ");
	 	//Armazena o dado coletado do usu�rio na vari�vel
	 	scanf("%d", &n1);
	 	//Pede o dado o usu�rio
	 	printf("Digite o segundo valor: ");
	 	//Armazena o dado coletado do usu�rio na vari�vel
	 	scanf("%d", &n2);
	 	//Pede o dado o usu�rio
	 	printf("Digite o terceiro valor: ");
	 	//Armazena o dado coletado do usu�rio na vari�vel
	 	scanf("%d", &n3);
	 	//Declara outra vari�vel
		double media = (n1+n2+n3)/3.0;
	 	 //Imprime o final do c�digo
		 printf("A m�dia dos valores � %.2f\n", media);
}
