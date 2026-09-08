#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//calculo de frete

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
    float compra, total;

    printf("Digite o valor total da compra: ");
    scanf("%f", &compra);

    if(compra < 100){
        printf("\nValor de frete aplicado: 25,00");
        total = compra + 25;
        printf("\nValor total da compra com frete: %.2f", total);
    } else if(compra >= 100 && compra < 200){
        printf("\nValor de frete aplicado: 15,00");
        total = compra + 15;
        printf("\nValor total da compra com frete: %.2f", total);
    } else if(compra >= 200 && compra < 300){
        printf("\nValor de frete aplicado: 8,00.");
        total = compra + 8;
        printf("\nValor total da compra com frete: %.2f", total);
    } else if(compra >= 300){
        printf("\nFrete gratuito.");
        total = compra;
        printf("\nValor total da compra com frete: %.2f", total);
    } else{
        printf("\nOperacao invalida.");
    }


	return 0;	
}