#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Conta do restaurante

int main(){
	float totalCons, total, divisao;
	int quantidade;
	
	printf("Digite o valor total consumido: ");
	scanf("%f", &totalCons);
	printf("\nDigite a quantidade de pessoas: ");
	scanf("%d", &quantidade);	
	
	total = ((totalCons * 10) /100) + totalCons;
	divisao = total / quantidade;
	
	printf("\nValor o consumo: %.2f", totalCons);
	printf("\nTaxa de servico: 10%%");
	printf("\nValo total da compra: %.2f", total);
	printf("\nValor dividido para cada um : %.2f", divisao);
	
	return 0;
}