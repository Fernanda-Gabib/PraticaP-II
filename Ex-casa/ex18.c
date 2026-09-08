#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//pedido de ingresso de cinema

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
    int opcao, quantidade;

    printf("=== Ingressos ===");
    printf("\n1 - Inteira (R$32,00)\n");
    printf("2 - Meia-entrada (R$16,00)\n");
    printf("3 - Infantil (R$12,00)\n");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);
    printf("Digite a quantidade de ingressos: ");
    scanf("%d", &quantidade);

    switch(opcao){
        case 1:
            printf("\nValor total a pagar: R$ %.2f", quantidade * 32.00);
            if (quantidade >= 5){
                printf("\nDesconto de 10%% aplicado.");
                printf("\nValor final a pagar: R$ %.2f", (quantidade * 32.00) * 0.9);
            }
        break;
        case 2:
            printf("\nValor total a pagar: R$ %.2f", quantidade * 16.00);
            if (quantidade >= 5){
                printf("\nDesconto de 10%% aplicado.");
                printf("\nValor final a pagar: R$ %.2f", (quantidade * 16.00) * 0.9);
            }
        break;
        case 3:
            printf("\nValor total a pagar: R$ %.2f", quantidade * 12.00);
            if (quantidade >= 5){
                printf("\nDesconto de 10%% aplicado.");
                printf("\nValor final a pagar: R$ %.2f", (quantidade * 12.00) * 0.9);
            }
        break;
        default:
            printf("\nOpcao invalida.");
    }

    

	return 0;	
}