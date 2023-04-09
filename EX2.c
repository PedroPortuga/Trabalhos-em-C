#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 //Declara variável do tipo caractere
	 char nome[50];
	 printf("Digite seu nome: ");
	 scanf("%s", nome);
	 //Imprime "Bem-vindo" mais o nome digitado
	 printf("Bem-vindo %s\n", nome);
}
