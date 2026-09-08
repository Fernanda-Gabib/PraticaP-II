#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//área de um terreno

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3){
		printf("\nO primeiro numero e o maior dos tres.");
	} else if(num2 > num1 && num2 > num3){
		printf("\nO segundo numero e o maior dos tres.");
	} else {
		printf("\nO terceiro numero e o maior dos tres.");
	}

	return 0;	
}