#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara vari�vel do tipo boolean
		bool valorLogico = 0;
			printf("Digite um valor l�gico (apenas 0 ou 1): ");
	 		scanf("%d", &valorLogico);
	 		//Declara outra vari�vel do tipo boolean
		  bool valorOposto = !valorLogico;	
		  //Imprime o valor oposto do n�mero digitado	
	 printf("O valor oposto �: %d\n", valorOposto);

}
