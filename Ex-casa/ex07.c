#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Verificação de triângulo

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	float lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &lado1);
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &lado2);
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &lado3);

    if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
        printf("Os lados formam um triangulo.");
    } else {
        printf("Os lados nao formam um triangulo.");
    }

	return 0;	
}