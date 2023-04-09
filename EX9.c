#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara variável
	 	double n1;
	 		printf("Digite o primeiro número: ");
	 		scanf("%lf", &n1);
	 	//Declara variável
	 	double n2;
	 		printf("Digite o segundo número: ");
	 		scanf("%lf", &n2);
	 	//Declara variáveis	
		double diferenca, maior, menor;
			//Função que inicia o loop "if"
  			if (n1 > n2) {
        		maior = n1;
        		menor = n2;
           //Função que continua o loop "else"	
   		 } else {
      			  maior = n2;
      			  menor = n1;
    }
		 diferenca = maior - menor;
		 //Imprime o final do código
		 printf("A diferença entre o maior e o menor número é %.2lf\n", diferenca);
}
