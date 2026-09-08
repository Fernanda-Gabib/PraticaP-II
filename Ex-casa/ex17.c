#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//calculadora com menu

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
    int valor1, valor2, opcao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("\n1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Resultado da Soma: %d\n", valor1 + valor2);
            break;
        case 2:
            printf("Resultado da Subtracao: %d\n", valor1 - valor2);
            break;
        case 3:
            printf("Resultado da Multiplicacao: %d\n", valor1 * valor2);
            break;
        case 4:
            if (valor2 != 0) {
                printf("Resultado da Divisao: %.2f\n", (float)valor1 / valor2);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

	return 0;	
}