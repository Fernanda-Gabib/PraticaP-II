#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//sistema de estacionamento

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");

    int opcao;
    float horas;
	
    printf("=== Sistema de Estacionamento ===\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("3 - Caminhonete\n");
    printf("Escolha o tipo de veiculo: ");
    scanf("%d", &opcao);
    printf("Digite a quantidade de horas: ");
    scanf("%f", &horas);

    switch(opcao){
        case 1:
            printf("Valor a pagar: R$ %.2f", horas * 3);
            if (horas > 5){
                printf("\nDesconto de 10%% aplicado.");
                printf("\nValor final a pagar: R$ %.2f", (horas * 3) * 0.9);
            }
        break;
        case 2:
            printf("Valor a pagar: R$ %.2f", horas * 5);
            if (horas > 5){
                printf("\nDesconto de 10%% aplicado.");
                printf("\nValor final a pagar: R$ %.2f", (horas * 5) * 0.9);
            }
        break;
        case 3:
            printf("Valor a pagar: R$ %.2f", horas * 8);
            if (horas > 5){
                printf("\nDesconto de 10%% aplicado.");
                printf("\nValor final a pagar: R$ %.2f", (horas * 8) * 0.9);
            }
        break;
        default:
            printf("\nOpcao invalida.");
    }

	return 0;	
}