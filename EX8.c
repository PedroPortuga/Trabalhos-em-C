#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara variável
	 int i;
	 printf("Digite um número: ");
	 scanf("%d", &i);
		//Função que inicia o loop "if"
		if (i>0)
		{
	 printf("O número é positivo\n");
	}
		//Função que continua o loop "else"
		else{
			//Imprime o final do código
			printf("O número é negativo\n");
	}
}
