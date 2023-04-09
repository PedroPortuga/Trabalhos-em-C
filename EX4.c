#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara variável do tipo boolean
		bool valorLogico = 0;
			printf("Digite um valor lógico (apenas 0 ou 1): ");
	 		scanf("%d", &valorLogico);
	 		//Declara outra variável do tipo boolean
		  bool valorOposto = !valorLogico;	
		  //Imprime o valor oposto do número digitado	
	 printf("O valor oposto é: %d\n", valorOposto);

}
