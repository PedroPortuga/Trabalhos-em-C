#include <stdio.h>
#include <locale.h>

//menozet22

void main(void){
    setlocale(LC_ALL,"portuguese");
	//Declara as vari�veis
    int x, y, z;
	//Pede o dado ao usu�rio
    printf("Digite um valor: \n");
    //Armazena o dado coletado do usu�rio na vari�vel
    scanf("%d", &x);
	//Pede o dado ao usu�rio
    printf("Digite o valor da raz�o: \n");
    //Armazena o dado coletado do usu�rio na vari�vel
    scanf("%d", &y);
	//Fun��o que inicia o loop "for"
    for(z = 0 ; z < 10 ; z++){
        printf("\n%d \n", x);
        x += y;
    }
}


