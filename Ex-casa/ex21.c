#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//sistema de cálculo de ingresso

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	char nome[100], evento[100];
	int idade, ingresso, carteirinha;
	float valorI, desconto, valorF;
	
	printf("=== Sistema de Ingresso ===\n");
	printf("\nDigite o nome do cliente: ");
	fgets(nome, sizeof(nome), stdin);
	printf("\nDigite a idade do cliente: ");
	scanf("%d", &idade);
	printf("\n--- Tipos de ingressos ---\n");
	printf("\n1 – Cinema: R$ 40,00\n2 – Teatro: R$ 60,00\n3 – Show: R$ 120,00\n4 – Parque: R$ 80,00\n");
	printf("\nEscolha o tipo de ingresso: ");
	scanf("%d", &ingresso);
	printf("\nO cliente possui carteirinha?\n1- Sim\n2- Nao\n");
	scanf("%d", &carteirinha);
	
	switch(ingresso){
		case 1:
			printf("\nIngresso escolhido: Cinema.\nValor inicial: R$40,00");
			valorI = 40.00;
			strcpy(evento, "Cinema");
		break;
		case 2:
			printf("\nIngresso escolhido: Teatro.\nValor inicial: R$60,00");
			valorI = 60.00;
			strcpy(evento, "Teatro");
		break;
		case 3:
			printf("\nIngresso escolhido: Show.\nValor inicial: R$120,00");
			valorI = 120.00;
			strcpy(evento, "Show");
		break;
		case 4:
			printf("\nIngresso escolhido: Parque.\nValor inicial: R$80,00");
			valorI = 80.00;
			strcpy(evento, "Parque");
		break;
		default:
			printf("\nOpcaoo de ingresso invalida!");
		break;
		
	}
	
	if(idade < 12 || idade >= 60){
		desconto = (valorI * 50) / 100;
		printf("\nDesconto de 50%% aplicado: R$%.2f", desconto);
	} else if(carteirinha == 1 && idade >=12 && idade < 60){
		desconto = valorI * 0.3;
		printf("\nDesconto de 30%% aplicado: R$%.2f", desconto);
	} else {
		printf("\nNenhum desconto aplicado.");
	}
	
	valorF = valorI - desconto;
	
	printf("\n\n=== Resumo da compra ===\n");
	printf("\nNome do cliente: %s", nome);
	printf("Evento: %s", evento);
	printf("\nValor inicial: R$%.2f", valorI);
	printf("\nValor do desconto: R$%.2f", desconto);
	printf("\nValor final: R$%.2f", valorF);
	
	return 0;
}