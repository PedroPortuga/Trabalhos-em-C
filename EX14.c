#include <stdio.h>
#include <locale.h>

//menozet22

void main(void){
    setlocale(LC_ALL,"portuguese");
	//Declara as variáveis
    int x, y, z;
	//Pede o dado ao usuário
    printf("Digite um valor: \n");
    //Armazena o dado coletado do usuário na variável
    scanf("%d", &x);
	//Pede o dado ao usuário
    printf("Digite o valor da razão: \n");
    //Armazena o dado coletado do usuário na variável
    scanf("%d", &y);
	//Função que inicia o loop "for"
    for(z = 0 ; z < 10 ; z++){
        printf("\n%d \n", x);
        x += y;
    }
}


