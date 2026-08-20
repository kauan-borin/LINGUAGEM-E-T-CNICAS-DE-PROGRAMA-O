#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, d, maior, maior2, maior3;
	
	printf ("Informe os valores a serem comparados: ");
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	
	maior = (a + b + abs (a-b))/2;
	maior2 = (maior + c + abs (maior-c))/2;
	maior3 = (maior2 + d + abs (maior2-d))/2;
	
	//abs = valor absoluto
	
	printf("O maior valor entre |%d|%d|%d|%d| = %d", a,b,c,d, maior3);
	
	return 0;
}
