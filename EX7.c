#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara vari�vel
	 double i;
	 	printf("Digite um n�mero: ");
	 		scanf("%lf", &i);
	 	//Fun��o que inicia o loop "if"
		if (i>=10)
		{
	 printf("O n�mero � maior que 10\n");
	}
	//Fun��o que continua o loop "else"
	else{
		//Imprime o final do c�digo
		printf("O n�mero � menor que 10\n");
	}
}
