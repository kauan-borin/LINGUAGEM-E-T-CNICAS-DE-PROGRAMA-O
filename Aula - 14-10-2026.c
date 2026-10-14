#include <stdio.h>
#include <stdlib.h>

//Elabore um programa que peça ao usuario para digitar 10 numeros que sejam 
//inteiros positivos e ignore os negativos e mostre na tela o resultado 
//da soma e a média desses valores 
//obs: nao precisa usar o vetor usem os laços da aula hoje while e do while

int main(int argc, char *argv[]) {
/*	
	int valor[10], i, cont;
	
	for(i=0;i<10;i++){
		scanf("%d", &valor[i]);
	}
	
	printf("for end");
	
	i = 0;
	
	while (i<10){
		scanf("%d", &valor[i]);
		i++;
	}
	
	i=0;
	do{
		printf("%d", valor[i]);
		i++;
	}while(i<10);
	
	/*
	printf("Insira um valor par: ");
	scanf("%d", &valor);
	
	while(valor %2 == 1){
		printf("Valor inserido impar. \nInsira um novo valor: \n");
		scanf("%d", &valor);
	}
	printf("a raiz de %d = %d", valor, sqrt(valor));
	 */
	
	int i, soma, n;
	i=0;
	while (i<9){
		scanf("%d", &n);
		if(n>0){
			soma += n;
			i++;
		}
	}
	printf("soma = %d e media = %d", soma, (soma/10));
	
	return 0;
}
