#include <stdio.h>
#include <locale.h>

//menozet22
//Declara a matriz
int m[5][5];
void main(void)
{
	setlocale(LC_ALL,"Portuguese");	
	
	m[0][0] = 10;		m[0][1] = 11;		m[0][2] = 12;	m[0][3] = 13;		m[0][4] = 14;	
	m[1][0] = 15;		m[1][1] = 16;		m[1][2] = 17;	m[1][3] = 18;   	m[1][4] = 19;	
	m[2][0] = 20;		m[2][1] = 21;   	m[2][2] = 22;	m[2][3] = 23;		m[2][4] = 24;	
	m[3][0] = 25;   	m[3][1] = 26;   	m[3][2] = 27;	m[3][3] = 28;		m[3][4] = 29;
	m[4][0] = 30;		m[4][1] = 31;	    m[4][2] = 32;	m[4][3] = 33;		m[4][4] = 34;
	//Declara as variáveis
	int x,y;
	//Função que inicia o loop "for"
	for(x = 0; x < 5;x++){		
		for(y = 0; y < 5;y++){	
			printf("%d ",m[x][y]);	
		}
		//Imprime o final do código
		printf("\n");
	}
}



