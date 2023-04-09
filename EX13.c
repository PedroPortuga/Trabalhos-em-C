#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara variável
	 	int numeros[15];
	 	//Declara outra variável
    	int i;
    	//Pede o dado ao usuário
   		 printf("Digite 15 números:\n");
   	 //Função que inicia o loop "for"
   	 for (i = 0; i < 15; i++) {
   	 	//Armazena o dado coletado do usuário na variável
        scanf("%d", &numeros[i]);
    }
    //Função que inicia outro loop "for"
    for (i = 0; i < 15; i++) {
    	//Imprime o final do código
        printf("O quadrado de %d é %d\n", numeros[i], numeros[i]*numeros[i]);
    }
}



