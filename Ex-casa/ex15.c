#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//menu de conversão

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");

    int opcao;
    float valor;
	
    printf("=== Menu de Conversao ===\n");
    printf("1 - Quilometros para metros.\n");
    printf("2 - Metros para centimetros.\n");
    printf("3 - Horas para minutos.\n");
    printf("4 - Minutos para segundos.\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%f", &valor);
    
    switch(opcao){
        case 1:
            printf("\nO valor em metros e: %.2f", valor * 1000);
        break;
        case 2:
            printf("\nO valor em centimetros e: %.2f", valor * 100);
        break;
        case 3:
            printf("\nO valor em minutos e: %.2f", valor * 60);
        break;
        case 4:
            printf("\nO valor em segundos e: %.2f", valor * 60);
        break;
    }

	return 0;	
}