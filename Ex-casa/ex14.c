#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//classificação de IMC

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
    float peso, altura, imc;

    printf("Digite o peso do paciente: ");
    scanf("%f", &peso);
    printf("Digite a altura do paciente: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("\nIMC: %.2f", imc);
        printf("\nAbaixo do peso.");
    } else if (imc >= 18.5 && imc < 25){
        printf("\nIMC: %.2f", imc);
        printf("\nPeso normal.");
    } else if(imc >= 25 && imc < 30){
        printf("\nIMC: %.2f", imc);
        printf("\nSobrepeso.");
    } else if(imc >= 30 ){
        printf("\nIMC: %.2f", imc);
        printf("\nObesidade.");
    } else{
        printf("\nOperacao invalida.");
    }


	return 0;	
}