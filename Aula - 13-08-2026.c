#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;
	double notacao;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &primeiro);
	printf("Insira o segundo valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo; 
	segundo = aux;
	
	// \n quebra de linha
	
	printf("Variavel em ordem inversa: %d, %d", primeiro, segundo);
	
	/*printf("Insira um valor a ser convertido: ");
	scanf("%d", &notacao);
	
	bit4 = valor_to_bin%2;
	valor_to_bin /= valor_to_bin;
	
	bit3 = valor_to_bin%2;
	valor_to_bin /= valor_to_bin;
	
	bit2 = valor_to_bin%2;
	valor_to_bin /= valor_to_bin;
	
	bit1 = valor_to_bin%2;
	valor_to_bin /= valor_to_bin;
	  
	printf ("%d%d%d%d", bit1, bit2, bit3);*/
	
	float salariof, vendat, comissao, totalrecebido;
	
	printf("\nInsira o valor do salario fixo do vendedor: ");
	scanf("%f", &salariof);

	printf("Insira o valor total em vendas do vendedor: ");
	scanf("%f", &vendat);
	
	comissao = vendat * 0.15;
	totalrecebido = salariof + comissao;
	
	printf("Total a receber no final do mes: %.2f", totalrecebido);
	
	float v1, v2, v3, v4, media, soma, produtorio;
	
	printf("\nDigite 4 valores a seguir...");
	printf("Insira o primeiro valor: ");
	scanf("%f", &v1);
	printf("Insira o segundo valor: ");
	scanf("%f", &v2);
	printf("Insira o terceiro valor: ");
	scanf("%f", &v3);
	printf("Insira o quarto valor: ");
	scanf("%f", &v4);
	
	media = (v1 + v2 + v3 + v4)/4;
	
	soma = v1 + v2 + v3 + v4;
	
	produtorio = v1 * v2 * v3 * v4;
	
	printf("Media dos valores informados: %.2f ", media);
	
	return 0;
}
