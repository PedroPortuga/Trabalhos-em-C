#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara vari�vel
	 	int numeros[15];
	 	//Declara outra vari�vel
    	int i;
    	//Pede o dado ao usu�rio
   		 printf("Digite 15 n�meros:\n");
   	 //Fun��o que inicia o loop "for"
   	 for (i = 0; i < 15; i++) {
   	 	//Armazena o dado coletado do usu�rio na vari�vel
        scanf("%d", &numeros[i]);
    }
    //Fun��o que inicia outro loop "for"
    for (i = 0; i < 15; i++) {
    	//Imprime o final do c�digo
        printf("O quadrado de %d � %d\n", numeros[i], numeros[i]*numeros[i]);
    }
}



