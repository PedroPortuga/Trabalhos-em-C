#include <stdio.h>
#include <locale.h>

//menozet22

void main(void){
    setlocale(LC_ALL,"portuguese");
	//Declara as vari�veis
    int x, y;
	//Pede o dado ao usu�rio
    printf("Digite um valor: \n");
    //Armazena o dado coletado do usu�rio na vari�vel
    scanf("%d", &x);
	printf("\n%d! = ", x);
	//Fun��o que inicia o loop "for"
    for(y = x ; y >=2 ; y--){
        printf("%d x ", y);
    }
    //Imprime o final do c�digo
    printf("1");
}




