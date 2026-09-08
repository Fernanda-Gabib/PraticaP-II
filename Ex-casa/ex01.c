#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Conversor de tempo

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	
	int totalSeg, horas, minutos, resto;
	
	printf("Digite a quantidade de segundos: ");
	scanf("%d", &totalSeg);
	
	resto = totalSeg % 60;
	horas = totalSeg  / 3600;
	minutos = (totalSeg % 3600) / 60;
	
	printf("\nO total de segundos e: %d", totalSeg);
	printf("\nHoras: %d", horas);
	printf("\nMinutos: %d", minutos);
	printf("\nResto: %d", resto);
	
	
	return 0;
}