#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara as variáveis
	 	int n1, n2, n3;
	 	//Pede o dado ao usuário
	 	printf("Digite o primeiro valor: ");
	 	//Armazena o dado coletado do usuário na variável
	 	scanf("%d", &n1);
	 	//Pede o dado o usuário
	 	printf("Digite o segundo valor: ");
	 	//Armazena o dado coletado do usuário na variável
	 	scanf("%d", &n2);
	 	//Pede o dado o usuário
	 	printf("Digite o terceiro valor: ");
	 	//Armazena o dado coletado do usuário na variável
	 	scanf("%d", &n3);
	 	//Declara outra variável
		double media = (n1+n2+n3)/3.0;
	 	 //Imprime o final do código
		 printf("A média dos valores é %.2f\n", media);
}
