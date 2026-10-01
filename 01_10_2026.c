#include <stdio.h>
#include <stdlib.h>

/* =========== PROVA 1 ================= */

void verificaNumero(int n){
	if (n % 2 != 0 && n % 5 == 0){
		printf("%d ", n);
	}
}

void p1q0(){
	int a, b, c, d;
	printf("Insira 4 numeros inteiros: \n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("Impares: ");
	if (a % 2 != 0) printf("%d ", a);
	if (b % 2 != 0) printf("%d ", b);
	if (c % 2 != 0) printf("%d ", c);
	if (d % 2 != 0) printf("%d ", d);

	printf("\nImpares multiplos de 5: ");
	verificaNumero(a);
	verificaNumero(b);
	verificaNumero(c);
	verificaNumero(d);
}

void p1q1(){
	int itens, capacidade;
	printf("Insira a quantidade de itens e a capacidade da mochila: \n");
	scanf("%d %d", &itens, &capacidade);

	if (capacidade <= 0){
		printf("Capacidade invalida");
	} else {
		printf("Mochilas totalmente preenchidas: %d", itens / capacidade);
	}
}

int unidadeExiste(int cod){
	if (cod == 1 || cod == 2 || cod == 3 || cod == 4 || cod == 5 ||
		cod == 8 || cod == 9 || cod == 10 || cod == 11){
		return 1;
	}
	return 0;
}

void p1q2(){
	float valor, resultado;
	int de, para;

	printf("Codigos das unidades:\n");
	printf(" 1-Celsius  2-Fahrenheit  3-Kelvin\n");
	printf(" 4-Metro    5-Milha\n");
	printf(" 8-kg       9-Libra\n");
	printf("10-km/h    11-mph\n\n");

	printf("Insira o valor a ser convertido: \n");
	scanf("%f", &valor);
	printf("Insira o codigo da unidade do valor: \n");
	scanf("%d", &de);
	printf("Insira o codigo da unidade de conversao: \n");
	scanf("%d", &para);

	if (unidadeExiste(de) == 0 || unidadeExiste(para) == 0){
		printf("Erro: unidade inexistente no sistema");
	} else if (de == 1 && para == 2){
		resultado = valor * 1.8 + 32;
		printf("%f C = %f F", valor, resultado);
	} else if (de == 2 && para == 1){
		resultado = (valor - 32) / 1.8;
		printf("%f F = %f C", valor, resultado);
	} else if (de == 1 && para == 3){
		resultado = valor + 273.15;
		printf("%f C = %f K", valor, resultado);
	} else if (de == 3 && para == 1){
		resultado = valor - 273.15;
		printf("%f K = %f C", valor, resultado);
	} else if (de == 4 && para == 5){
		resultado = valor / 1609.34;
		printf("%f m = %f mi", valor, resultado);
	} else if (de == 5 && para == 4){
		resultado = valor * 1609.34;
		printf("%f mi = %f m", valor, resultado);
	} else if (de == 8 && para == 9){
		resultado = valor * 2.205;
		printf("%f kg = %f lb", valor, resultado);
	} else if (de == 9 && para == 8){
		resultado = valor / 2.205;
		printf("%f lb = %f kg", valor, resultado);
	} else if (de == 10 && para == 11){
		resultado = valor / 1.609;
		printf("%f km/h = %f mph", valor, resultado);
	} else if (de == 11 && para == 10){
		resultado = valor * 1.609;
		printf("%f mph = %f km/h", valor, resultado);
	} else {
		printf("Conversao nao disponivel na tabela");
	}
}

/* ================ PROVA 2 =========== */

void p2q0(){
	int itens, capacidade;
	printf("Insira a quantidade de itens e a capacidade da mochila: \n");
	scanf("%d %d", &itens, &capacidade);

	if (capacidade <= 0){
		printf("Capacidade invalida");
	} else {
		printf("Mochilas totalmente preenchidas: %d\n", itens / capacidade);
		printf("Itens que sobraram: %d", itens % capacidade);
	}
}

void p2q1(){
	int a, b, c, menor, maior, meio;
	printf("Insira tres numeros inteiros: \n");
	scanf("%d %d %d", &a, &b, &c);

	if (a == b || a == c || b == c){
		printf("os numeros tem que ser distintos");
	} else {
		menor = a;
		if (b < menor) menor = b;
		if (c < menor) menor = c;

		maior = a;
		if (b > maior) maior = b;
		if (c > maior) maior = c;

		meio = a + b + c - menor - maior;
		printf("%d %d %d", menor, meio, maior);
	}
}

void p2q2(){
	float x, y;
	int cod;
	printf("Insira o primeiro valor, o segundo valor e o codigo da operacao\n");
	printf("(1: >   2: <   3: ==   4: !=): \n");
	scanf("%f %f %d", &x, &y, &cod);

	switch(cod){
	case 1:
		if (x > y) printf("Verdadeiro"); else printf("Falso");
	break;

	case 2:
		if (x < y) printf("Verdadeiro"); else printf("Falso");
	break;

	case 3:
		if (x == y) printf("Verdadeiro"); else printf("Falso");
	break;

	case 4:
		if (x != y) printf("Verdadeiro"); else printf("Falso");
	break;

	default:
		printf("operador invalido");
	}
}

/* ============== PROVA 3 ===================== */

void mostraSeConsecutivo(int n, int a, int b, int c, int d, int e){
	if (a == n+1 || a == n-1 || b == n+1 || b == n-1 || c == n+1 || c == n-1 ||
		d == n+1 || d == n-1 || e == n+1 || e == n-1){
		printf("%d ", n);
	}
}

void p3q0(){
	int a, b, c, d, e;
	printf("Insira 5 numeros inteiros: \n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("Valores consecutivos: ");
	mostraSeConsecutivo(a, a, b, c, d, e);
	mostraSeConsecutivo(b, a, b, c, d, e);
	mostraSeConsecutivo(c, a, b, c, d, e);
	mostraSeConsecutivo(d, a, b, c, d, e);
	mostraSeConsecutivo(e, a, b, c, d, e);
}

void p3q1(){
	float peso, altura, imc;
	printf("Insira o peso (kg) e a altura (m): \n");
	scanf("%f %f", &peso, &altura);

	imc = peso / (altura * altura);
	printf("IMC: %.2f - ", imc);

	if (imc < 18.5){
		printf("Abaixo do peso");
	} else if (imc < 25.0){
		printf("Normal");
	} else if (imc < 30.0){
		printf("Acima do peso");
	} else {
		printf("Obeso");
	}
}

void p3q2(){
	printf("Inicio:                         A=6 B=0 C=0\n");
	printf("1) Disco 1 de A para C:         A=5 B=0 C=1\n");
	printf("2) Disco 2 de A para B:         A=3 B=2 C=1\n");
	printf("3) Disco 1 de C para B:         A=3 B=3 C=0\n");
	printf("4) Disco 3 de A para C:         A=0 B=3 C=3\n");
	printf("5) Disco 1 de B para A:         A=1 B=2 C=3\n");
	printf("6) Disco 2 de B para C:         A=1 B=0 C=5\n");
	printf("7) Disco 1 de A para C:         A=0 B=0 C=6\n");
}

/* ============== MENU ================= */

int main(int argc, char *argv[]) {

	int prova, questao;

	printf("Insira qual prova quer resolver: [1|2|3]\n");
	scanf("%d", &prova);
	printf("Insira qual questao quer resolver: [0|1|2]\n");
	scanf("%d", &questao);
	printf("\n");

	switch(prova){

	case 1:
		switch(questao){
		case 0:
			p1q0();
		break;
		case 1:
			p1q1();
		break;
		case 2:
			p1q2();
		break;
		default:
			printf("Questao invalida");
		}
	break;

	case 2:
		switch(questao){
		case 0:
			p2q0();
		break;
		case 1:
			p2q1();
		break;
		case 2:
			p2q2();
		break;
		default:
			printf("Questao invalida");
		}
	break;

	case 3:
		switch(questao){
		case 0:
			p3q0();
		break;
		case 1:
			p3q1();
		break;
		case 2:
			p3q2();
		break;
		default:
			printf("Questao invalida");
		}
	break;

	default:
		printf("Prova invalida");
	}

	return 0;
}
