#include <stdio.h>
#include <locale.h>

//menozet22

void main(void){
    setlocale(LC_ALL,"portuguese");
    //Declara as vari�veis
	int x, y, z = 0;
    //Pede o dado ao usu�rio
    printf("Digite um n�mero inteiro positivo: ");
    //Armazena o dado coletado do usu�rio na vari�vel
    scanf("%d", &x);
    //Fun��o que inicia o loop "for"
    for (y = 2; y <= x / 2; ++y) {
        //Fun��o que inicia o loop "if"
        if (x % y == 0) {
            z = 1;
        }
    }	//Fun��o que inicia outro loop "if"
        if (z == 0 && x != 1 && x != 0)
            printf("%d � um n�mero primo.\n", x);
        //Fun��o que continua o loop "else"	
        else
        	//Imprime o final do c�digo
            printf("%d n�o � um n�mero primo.\n", x);
    }				


