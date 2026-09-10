#include <stdio.h>
#include <stdlib.h>

float calc_inss (float salariobruto){
	if(salariobruto <= 1412.00) return salariobruto*0.075;
	else if(salariobruto <= 2666.68) return salariobruto*0.09;
	else if(salariobruto <= 4000.03) return salariobruto*0.12;
	else return salariobruto*0.14;
}

float calc_irpf (float salariobase){
	if(salariobase <= 2259.20) return salariobase;
	else if(salariobase <= 2826.65) return (salariobase*0.075) - 169.44;
	else if(salariobase <= 3751.05) return (salariobase*0.15) - 381.44;
	else if(salariobase <= 4664.68) return (salariobase*0.225) - 662.77;
	else return (salariobase*0.275) - 896.00;
}


int main(int argc, char *argv[]) {	 

	float salariobruto, desconto;
	printf("Insira o salario bruto: ");
	scanf("%f", &salariobruto);
	
	desconto = calc_inss(salariobruto);
	//printf("calculo do INSS: %f || %f", desconto, calc_inss(salariobruto));

	float salariobase, desconto1;

	salariobase = salariobruto - desconto;
	
	desconto1 = calc_irpf(salariobase);
	//printf("\nImposto de Renda Retido na Fonte (IRPF): %f || %f", desconto1, calc_irpf(salariobase));
	
	int valorh, horasm;
	
	printf("Insira o valor da hora trabalhada: ")
	scanf("%d", %valorh)
	
	printf("Insira quantidade de horas trabalhadas no mês: ")
	scanf("%d", %horasm)
	
	printf("======================================================")
    RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)
======================================================
 Salário Bruto (Horas x Valor):   R$ 5.000,00
 (-) Desconto INSS:               R$   700,00
 (-) Desconto IRPF:               R$   301,06
------------------------------------------------------
 LÍQUIDO A RECEBER:               R$ 3.998,94
======================================================
	
	return 0;
}
