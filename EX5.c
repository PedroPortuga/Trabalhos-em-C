#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara vari�vel do tipo num�rico
	 double n1;
	 printf("Digite o primeiro n�mero: ");
	 scanf("%lf", &n1);
	 double n2;
	 printf("Digite o segundo n�mero: ");
	 scanf("%lf", &n2);
	 //Declara vari�vel do tipo num�rico agora como resultado 
	 double resultado = (n1-n2);
	 //Imprime o final do c�digo
	 printf("O resultado �: %.2lf\n", resultado);
}
