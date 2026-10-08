#include <stdio.h>
#include <stdlib.h>

int compara (int a, int b){
	if(a > b)return a;
	else return b;
}

int compara2 (int a, int b){
	if(a > b)return b;
	else return a;
}

int main(int argc, char *argv[]) {
	
int valores[10]; //vetor
int maior, menor, i;

printf("vamor ler os valores: \n");

//i (indice) 
//for (inicialização; verificação ;incremento)

for (i = 0; i < 10; i++){
	scanf("%d", &valores[i]);
}

for (i = 1, maior = valores[0]; i < 5; i+=2){
	int temp = compara (valores[i],valores[i+1]);
	maior = compara(maior,temp);
}

for (i = 6, menor = valores[5]; i < 10; i+=2){
	int temp = compara2 (valores[i],valores[i+1]);
	menor = compara2(menor,temp);
}

//for (i = 1, maior = valores[0]; i < 5; i++){
//	if(valores[i] < valores[i+1])		
//		maior = valores[i]
//	else maior = valores[i+1]
//}

printf("\n %d", maior);
printf("\n %d", menor);	
	return 0;
}
