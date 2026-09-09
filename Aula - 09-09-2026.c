#include <stdio.h>
#include <stdlib.h>

int multDigito(int dig, int valor){
	return dig*valor;
}

int main(int argc, char *argv[]) {
	
	//int n11,n10,n9,n8,n7,n6,n5,n4,n3,n2,n1;
	int cpf11,cpf10,cpf9,cpf8,cpf7,cpf6,cpf5,cpf4,cpf3,cpf2,cpf1,soma,resto,restoII;

	printf("Insira o CPF (EX: 2 8 3 . 0 6 1 . 6 4 0 - 5 9): ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &cpf11, &cpf10, &cpf9, &cpf8, &cpf7, &cpf6, &cpf5, &cpf4, &cpf3, &cpf2, &cpf1);
	
	printf("Confirme o CPF %d%d%d.%d%d%d.%d%d%d-%d%d", cpf11, cpf10, cpf9, cpf8, cpf7, cpf6, cpf5, cpf4, cpf3, cpf2, cpf1);
	
	soma = multDigito(cpf11,10)+multDigito(cpf10,9)+multDigito(cpf9,8)+multDigito(cpf8,7)+multDigito(cpf7,6)+
	multDigito(cpf6,5)+multDigito(cpf5,4)+multDigito(cpf4,3)+multDigito(cpf3,2);
	
	soma *=10;
	resto = soma%11;
	if  (resto == 10) resto = 0;
	printf("\n%d", resto);
	
/*	n11 = cpf11
	n10 = cpf10
	n9 = cpf9
	n8 = cpf8
	n7 = cpf7
	n6 = cpf6
	n5 = cpf5
	n4 = cpf4
	n3 = cpf3
	n2 = cpf2
	n1 = cpf1
	
	cpf11 = cpf11 * 10
	cpf10 = cpf10 * 9
	cpf9 = cpf9 * 8
	cpf8 = cpf8 * 7 
	cpf7 = cpf7 * 6
	cpf6 = cpf6 * 5
	cpf5 = cpf5 * 4
	cpf4 = cpf4 * 3
	cpf3 = cpf3 * 2

	
	soma = (cpf11 + cpf10 + cpf9 + cpf8 + cpf7 + cpf6 + cpf5 + cpf4 + cpf3)*10
	resto = soma % 11
*/	

	soma = multDigito(cpf11,11)+multDigito(cpf10,10)+multDigito(cpf9,9)+multDigito(cpf8,8)+multDigito(cpf7,7)+
	multDigito(cpf6,6)+multDigito(cpf5,5)+multDigito(cpf4,4)+multDigito(cpf3,3)+multDigito(cpf2,2);
	
	soma *=10;
	restoII = soma%11;
	if  (restoII == 10) resto = 0;
	printf("\n%d", restoII);
	
	
	return 0;
}
