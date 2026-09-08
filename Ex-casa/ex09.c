#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//sistema de aprovação para bolsa

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");

    float media, renda;
    int frequencia;
	
    printf("Digite a media do aluno: ");
    scanf(" %f", &media);
    printf("Digite a frequencia do aluno: ");
    scanf(" %d", &frequencia);
    printf("Digite a renda do aluno: ");
    scanf(" %f", &renda);

    if(media >= 8.0 && frequencia >= 75 && renda <= 4000){
        printf("\nAluno aprovado para bolsa.");
    } else{
        printf("\nAluno reprovado para bolsa.");
    }
	
	return 0;	
}