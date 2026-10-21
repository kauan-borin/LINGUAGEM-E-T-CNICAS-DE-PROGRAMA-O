#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
//ex - 1


//ex - 2


//ex - 3	
	int n, aux, mult=1;
	
	scanf("%d", &n);
	
	aux=0;
	
	while (n > 0){
		aux = aux+(n%2)*mult;
		n=n/2;
		mult=mult*10;
	}
	
	printf("%d", aux);
	
	return 0;
}
