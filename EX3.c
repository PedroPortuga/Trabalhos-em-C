#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara vari�vel do tipo num�rico
	 double numero;
	 printf("Digite um n�mero: ");
	 scanf("%lf", &numero);
	 //Imprime o n�mero digitado
	 printf("O n�mero digitado �: %.2lf\n", numero);
}
