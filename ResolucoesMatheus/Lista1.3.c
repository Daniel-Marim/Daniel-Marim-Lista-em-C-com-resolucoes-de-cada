#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	float custo, distribuidor, impostos, total;
	
	printf("Digite o valor do custo de f�brica do carro: R$");
	scanf("%f", &custo);
	
	distribuidor = custo*0.28;
	impostos = custo*0.45;
	
	total = custo + impostos + distribuidor;
	
	printf("\nO custo ao consumidor seria de R$%.2f\n", total);
	return 0;
}