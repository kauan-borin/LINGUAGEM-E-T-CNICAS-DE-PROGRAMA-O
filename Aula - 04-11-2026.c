#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define bandeira 9
#define bomba 0

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int campo[9][9];
	int casax,casay;
	int i, j;
	
	//printf("rand = %d",(rand()%10));
	
	//limpa a nossa matriz e insere 9 em todas as posições
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			campo[i][j] = 9; 
		}
	}
	
	//preenche com bombas nosso jogo
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if (rand()%10 == 0)
			campo[i][j] = 0; 
		}
	}
	
	//printf("\t \t \t"); centralizar conteudo
	
	printf("Campo Minado \n -------------------------\n");
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			//if(campo[i][j]==0)printf("|9|"); else
			printf("|%d|", campo[i][j]);
		}
		printf("\n");
	}
	printf(" -------------------------\n");
	
	return 0;
}
