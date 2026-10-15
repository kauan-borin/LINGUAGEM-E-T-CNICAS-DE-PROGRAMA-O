#include <stdio.h>
#include <stdlib.h>

unsigned long long calcularFatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * calcularFatorial(n - 1);
}



//lista de exercicios

int main(int argc, char *argv[]) {
	
	//vamos relembrar algumas estruturas que vimos essa semana
	//laço for repete um conjunto de instruções de um valor valor inicial (inicialização)
	//até uma determinada condição realizando uma operação (incremento) a cada execução[sempre]
	
	/*
	for(i=0, j=1; i<10; i++, j--){
		printf("esse e o laco FOR").
	}
	*/
	
	//laço while (enquanto), que testa se uma condição é verdadeira caso seja executada um bloco
	//de comandos repetindo o processo enquanto a condição for avaliada verdadeira
	
	/*
	while(i<10){
		printf("%d, esse e o laco while", i).
		if(n%2==0)i++;
		n++;
	}
	*/
	
	//laço DO WHILE, semelhante ao laço while, porém antes de realizar a verificação ele executa
	//o conjunto de instruções para apos a execução realizar a verificação da condição
	
	/*
	do{
		printf("%d, laco DO", i).
		if(n%2==0) i++;
		n++;
	}	while (i<10);
	*/
	
	//Exercicio 1
	//elabore um programa que permita a entrada de 3 valores. E conte do primeiro valor 
	//inserido, até o segundo valor, com o passo da contagem dado pelo terceiro valor
	//ex: 1, 8, 2 >> contar de 1 a 8, com passo 2 = 3, 5, 7.
	
	int ini, fim, passo;
	
		printf("Insira o valor inicial, final e passo: ");
		scanf("%d %d %d", &ini, &fim, &passo);
		if(ini<fim){
			while (ini<fim){
				printf("%d", ini);
				ini += passo;
			}
		}else{
			while (ini>fim){
				printf("|%d|", ini);
				ini -= passo;
			}
		}
		

	//Exercicio 2
	//faça um programa que receba um número n e realize a soma dos n primeiros 
	//termos da sequencia definida [S = 1/2; 1/4; 1/8; 1/16... N] 
	
	
	
	//Exercicio 3
	//Crie um programa que exiba na tela, o triangulo de pascal.
	
	//int n, p;

	//for(i=0;i<10;i++){
		
	//	printf("%d", )
	
	//}

	
	return 0;
}
