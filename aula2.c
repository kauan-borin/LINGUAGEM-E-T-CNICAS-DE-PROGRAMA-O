#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float area, area2, B, b, h, raio; //r2
	
	printf("Insira o raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi*(raio*raio);
	//r2 = raio*raio;
	//area = pi * r2;
	
	printf("A Area do circulo de raio %f = %f", raio, area);
	
	printf("Agora a area do trapezio Area = ((B+b)*h)/2)");
	printf("Insira o B: ");
	scanf("%f", &B);	
	printf("Insira o b: ");
	scanf("%f", &b);
	printf("Insira o h: ");
	scanf("%f", &h);
	
	area2 = ((B+b)*h)/2;
	
	printf("A Area do trapezio = %f", area2);
		
	return 0;
}
