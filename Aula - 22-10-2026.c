#include <stdio.h>
#include <stdlib.h>

//faça um programa que leia uma palavra e verifique se ela é um palindromo
//um palindromo é uma palavra frase ou numero que pode ser lido da esquerda para
//direita ou da direita para esquerda mantendo exatamente o mesmo sentido

int main(int argc, char *argv[]) {
	
	int i,j, palin;
	char p[30];
	
	printf("Insira uma palavra: ");
	scanf("%s", &p);
	
	for (i=0;i<30 && p[i] != '\0';i++){
		printf("%c", p[i]);
	}
	printf("\n tamanho da minha palavra eh %d", (i-1));
	
	for(j=i-1, i=0; i<j; i++, j--){
		if (p[i] == p[j])	palin = 1;
		else palin = 0;
	}
	
	if (palin) printf("\n eh palindromo");
	else printf ("\n nao eh palindromo");
		
	
	return 0;
}
