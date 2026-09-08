#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//faixa de desconto em compra

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
    float valorTotal, desconto, valorFinal;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorTotal);

    if(valorTotal < 100){
        printf("\nNenhum desconto aplicado.");
        printf("\nValor final da compra: %.2f", valorTotal);
    } else if(valorTotal >= 100 && valorTotal < 200){
        printf("\nDesconto de 5%% aplicado.");
        desconto = (valorTotal * 5) / 100;
        valorFinal = valorTotal - desconto;
        printf("\nValor do desconto: %.2f", desconto);
        printf("\nValor final da compra: %.2f", valorFinal);
    } else if(valorTotal >= 200 && valorTotal < 500){
        printf("\nDesconto de 10%% aplicado.");
        desconto = (valorTotal * 10) / 100;
        valorFinal = valorTotal - desconto;
        printf("\nValor do desconto: %.2f", desconto);
        printf("\nValor final da compra: %.2f", valorFinal);
    } else if(valorTotal >= 500){
        printf("\nDesconto de 15%% aplicado.");
        desconto = (valorTotal * 15) / 100;
        valorFinal = valorTotal - desconto;
        printf("\nValor do desconto: %.2f", desconto);
        printf("\nValor final da compra: %.2f", valorFinal);
    } else{
        printf("\nOperacao invalida.");
    }


	return 0;	
}