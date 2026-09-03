#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float a,b,c,d,e,f; //alocar uma posição na memoria
	
	a = 8;
	b = 19;
	c = a+b;
	d = a/b;
	e = a-b;
	f = a*b;
	
	printf("Operacoes entre %f e %f + %f / %f - %f * %f", a,b,c,d,e,f);
	/* %d é identificador de números inteiros %f = float %c = char %lf = double (a ordem das variaveis a,b,c mostra os 
	seus respectivos valores em suas posições em %d) */
	
	/* se for realizado a operação c de diferentes formas /,+,*,- é o ultimo resultado que será representado*/
	return 0;
}
