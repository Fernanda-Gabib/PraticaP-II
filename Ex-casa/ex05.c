#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//área de um terreno

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	float largura, comprimento, area, custo;
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &largura);
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &comprimento);

	area = largura * comprimento;
	custo = area * 18.50;
	
	printf("\nA area total do terreno a: %.2f metro quadrados.", area);
	printf("\nCada metro quadrado custa 18,50.\nPara cobrir o terreno custaria: %.2f", custo);
	


	return 0;	
}