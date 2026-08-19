#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*int primeiro, segundo, aux;
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
	
	int n, result, bit64, bit32, bit16, bit8, bit4, bit2;
	printf("Entre com o valor para conversao: ");
	scanf("%d",&n);
	
	bit64 = n%2;
	result = n/2;
	
	bit32 = result%2;
	result = result/2;
	
	bit16 = result%2;
	result = result/2;
	
	bit8 = result%2;
	result = result/2;
	
	bit4 = result%2;
	result = result/2;
	
	bit2 = result%2;
	result = result/2;
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n, result%2, bit2, bit4, bit8, bit16, bit32, bit64);
	return 0;
	
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
	
	printf("Media dos valores informados: %.2f ", media); */
	
	//int idade
	
	int x1, x2, y1, y2, p1, p2;
	float dist;
	
	printf ("Insira as cordenadas do ponto p1 (exemplo do formato: 5, 6): ");
	scanf ("%d, %d", &x1, &y1);
	
	printf ("Insira as cordenadas do ponto p2 (exemplo do formato: 5, 6): ");
	scanf ("%d, %d", &x2, &y2);
	
	p1 = pow(x2-x1, 2);
	p2 = pow(y2-y1, 2);
	
	dist = sqrt (p1+p2);
	
	printf ("Distancia: (%f)", dist);
	
	return 0;
}
