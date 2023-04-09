#include <stdio.h>
#include <locale.h>

//menozet22
//Declara a matriz
int m[5][6];
void main(void)
{
	setlocale(LC_ALL,"Portuguese");	
		
	m[0][0] = 1;		m[0][1] = 1;		m[0][2] = 1;		m[0][3] = 1;		m[0][4] = 1;	m[0][5] = 1;		
                    	m[1][1] = 2;    	m[1][2] = 2;		m[1][3] = 2;    	m[1][4] = 2;    m[1][5] = 2;	
	m[2][0] = 3;		m[2][1] = 3;    	m[2][2] = 3;		m[2][3] = 3;		m[2][4] = 3;	m[2][5] = 3;	
	m[3][0] = 4;		m[3][1] = 4;    	m[3][2] = 4;		m[3][3] = 4;		m[3][4] = 4;	m[3][5] = 4;
	m[4][0] = 5;		m[4][1] = 5;	    m[4][2] = 5;	    m[4][3] = 5;		m[4][4] = 5;	m[4][5] = 5;
	//Declara as variáveis
	int x,y;
	//Função que inicia o loop "for"
	for(x = 0; x < 5;x++){		
		for(y = 1; y < 6;y++){	
			//Imprime a matriz
			printf("%d-%d ",m[x][y]);	
		}
		//Imprime o final do código
		printf("\n");
	}
}

