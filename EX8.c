#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara vari�vel
	 int i;
	 printf("Digite um n�mero: ");
	 scanf("%d", &i);
		//Fun��o que inicia o loop "if"
		if (i>0)
		{
	 printf("O n�mero � positivo\n");
	}
		//Fun��o que continua o loop "else"
		else{
			//Imprime o final do c�digo
			printf("O n�mero � negativo\n");
	}
}
