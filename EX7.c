#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara variável
	 double i;
	 	printf("Digite um número: ");
	 		scanf("%lf", &i);
	 	//Função que inicia o loop "if"
		if (i>=10)
		{
	 printf("O número é maior que 10\n");
	}
	//Função que continua o loop "else"
	else{
		//Imprime o final do código
		printf("O número é menor que 10\n");
	}
}
