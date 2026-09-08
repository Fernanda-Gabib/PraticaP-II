#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//classificação de velocidade

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
    float velocidade;

    printf("Digite a velocidade do carro: ");
    scanf("%f", &velocidade);

    if(velocidade <=80){
        printf("\nVelocidade permitida.");
    } else if(velocidade > 80 && velocidade <= 100){
        printf("\nInfracao media.");
    } else if(velocidade > 100){
        printf("\nInfracao grave.");
    } else{
        printf("\nOperacao invalida.");
    }

	return 0;	
}