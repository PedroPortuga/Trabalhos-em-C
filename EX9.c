#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 	//Declara vari�vel
	 	double n1;
	 		printf("Digite o primeiro n�mero: ");
	 		scanf("%lf", &n1);
	 	//Declara vari�vel
	 	double n2;
	 		printf("Digite o segundo n�mero: ");
	 		scanf("%lf", &n2);
	 	//Declara vari�veis	
		double diferenca, maior, menor;
			//Fun��o que inicia o loop "if"
  			if (n1 > n2) {
        		maior = n1;
        		menor = n2;
           //Fun��o que continua o loop "else"	
   		 } else {
      			  maior = n2;
      			  menor = n1;
    }
		 diferenca = maior - menor;
		 //Imprime o final do c�digo
		 printf("A diferen�a entre o maior e o menor n�mero � %.2lf\n", diferenca);
}
