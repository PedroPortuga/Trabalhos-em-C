#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara variável do tipo numérico
	 double n1;
	 printf("Digite o primeiro número: ");
	 scanf("%lf", &n1);
	 double n2;
	 printf("Digite o segundo número: ");
	 scanf("%lf", &n2);
	 //Declara variável do tipo numérico agora como resultado 
	 double resultado = (n1-n2);
	 //Imprime o final do código
	 printf("O resultado é: %.2lf\n", resultado);
}
