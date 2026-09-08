#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//sistema de acesso

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
    int idade, opcaoI, opcaoR;

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);
    printf("O cliente possui ingresso?\n1- Sim\n2- Nao\n");
    scanf("%d", &opcaoI);
    printf("O cliente esta com o responsavel?\n1- Sim\n2- Nao\n");
    scanf("%d", &opcaoR);

    if(idade>=18 && opcaoI == 1 || idade<18 && opcaoI == 1 && opcaoR == 1){
        printf("\nAcesso permitido.");
    } else{
        printf("\nAcesso negado.");
    }

	return 0;	
}