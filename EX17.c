#include <stdio.h>
#include <locale.h>

//menozet22

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara as vari�veis
	int num, i, j, x;
    //Pede o dado ao usu�rio
    printf("Digite um n�mero inteiro positivo: ");
    //Armazena o dado coletado do usu�rio na vari�vel
    scanf("%d", &num);
    //Imprime ao usu�rios os numeros primos
    printf("N�meros primos at� %d:\n", num);
    //Fun��o que inicia o loop "for" para imprimir n�meros primos
    for (i = 2; i <= num; ++i) {
        x = 0;
        // Outra fun��o "for" que verifica se o n�mero atual � primo
        for (j = 2; j <= i/2; ++j) {
        	//Fun��o "if"
            if (i % j == 0) {
                x = 1;
            }
        }
        //Fun��o "if"
        if (x == 0 && i != 1)
            printf("%d ", i);
    }
}


