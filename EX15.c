#include <stdio.h>
#include <locale.h>

//menozet22

void main(void){
    setlocale(LC_ALL,"portuguese");
	//Declara as variáveis
    int x, y;
	//Pede o dado ao usuário
    printf("Digite um valor: \n");
    //Armazena o dado coletado do usuário na variável
    scanf("%d", &x);
	printf("\n%d! = ", x);
	//Função que inicia o loop "for"
    for(y = x ; y >=2 ; y--){
        printf("%d x ", y);
    }
    //Imprime o final do código
    printf("1");
}




