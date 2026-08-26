#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a, b, c, r;
	
	printf("insira os valores (A, B, C): ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		r = a;
	}

	else{
		r = b;
	}
	
	if (r < c) {
		r = c;
	}
	
	printf("%d eh o maior", r);
	
	int n;
	
	printf("\ninsira um valor: ");
	scanf("%d", &n);
	
	if (n%2 == 0) printf("Valor eh par"); else printf ("Valor eh impar");
	
	return 0;
}
