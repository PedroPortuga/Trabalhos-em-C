#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara as variáveis
	int num, i, j, x;
    //Pede o dado ao usuário
    printf("Digite um número inteiro positivo: ");
    //Armazena o dado coletado do usuário na variável
    scanf("%d", &num);
    //Imprime ao usuários os numeros primos
    printf("Números primos até %d:\n", num);
    //Função que inicia o loop "for" para imprimir números primos
    for (i = 2; i <= num; ++i) {
        x = 0;
        // Outra função "for" que verifica se o número atual é primo
        for (j = 2; j <= i/2; ++j) {
        	//Função "if"
            if (i % j == 0) {
                x = 1;
            }
        }
        //Função "if"
        if (x == 0 && i != 1)
            printf("%d ", i);
    }
}


