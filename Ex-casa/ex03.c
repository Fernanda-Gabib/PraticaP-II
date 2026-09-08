#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//troco do cliente

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	float valorC, valorE;
	
	printf("Digite o valor total da compra: ");
	scanf("%f", &valorC);
	printf("\nDigite o valor entregue: ");
	scanf("%f", &valorE);
	
	if(valorE > valorC){
		printf("\nPagamento realizado com sucesso!");
		printf("\nValor do troco: %.2f", valorE - valorC);
	} else if(valorE == valorC){
		printf("\nPagamento realizado com sucesso!");
		printf("\nNao ha troco para esta compra.");
	} else{
		printf("\nValor insuficiente para realizar o pagamento.");
		printf("\nFalta: %.2f", valorC - valorE);
	}
	
	
	return 0;
}