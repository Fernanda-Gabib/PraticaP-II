#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//consumo combustível

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	float distancia, litros, consumo;

	printf("Digite a distancia percorrida: ");
	scanf("%f", &distancia);
	printf("Digite os litros gastos: ");
	scanf("%f", &litros);
	
	consumo = distancia / litros;
	
	if(consumo < 8){
		printf("\nConsumo: %.2f", consumo);
		printf("\nConsumo alto.");
	} else if(consumo >= 8 && consumo <= 12){
		printf("\nConsumo: %.2f", consumo);
		printf("\nConsumo medio.");
	} else if (consumo > 12){
		printf("\nConsumo: %.2f", consumo);
		printf("\nConsumo economico.");
	} else{
		printf("\nOperacao invalida.");
	}
	
	

	return 0;	
}