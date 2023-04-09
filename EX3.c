#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara variável do tipo numérico
	 double numero;
	 printf("Digite um número: ");
	 scanf("%lf", &numero);
	 //Imprime o número digitado
	 printf("O número digitado é: %.2lf\n", numero);
}
