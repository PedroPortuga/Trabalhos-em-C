#include <stdio.h>
#include <locale.h>

//menozet22

void main(void)
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara a variável
	 int x;
	 //Declara o vetor
	 int par[15] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 86, 144, 233, 300, 533};
	 	//Função que inicia o loop "for"
		for (x =0 ; x<15 ; ++x){
			//Imprime o final do código
		 	printf("%i ", par[x]);
        }
}


