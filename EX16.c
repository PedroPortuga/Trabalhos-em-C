#include <stdio.h>
#include <locale.h>

//menozet22

void main(void){
    setlocale(LC_ALL,"portuguese");
    //Declara as variáveis
	int x, y, z = 0;
    //Pede o dado ao usuário
    printf("Digite um número inteiro positivo: ");
    //Armazena o dado coletado do usuário na variável
    scanf("%d", &x);
    //Função que inicia o loop "for"
    for (y = 2; y <= x / 2; ++y) {
        //Função que inicia o loop "if"
        if (x % y == 0) {
            z = 1;
        }
    }	//Função que inicia outro loop "if"
        if (z == 0 && x != 1 && x != 0)
            printf("%d é um número primo.\n", x);
        //Função que continua o loop "else"	
        else
        	//Imprime o final do código
            printf("%d não é um número primo.\n", x);
    }				


