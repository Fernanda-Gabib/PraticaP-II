#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//desconto especial

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
    int idade, opcao;

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);
    printf("O cliente e estudante?\n(1- sim / 0- nao)\n");
    scanf("%d", &opcao);

    if (idade < 18 || opcao == 1){
        printf("\nDesconto especial aplicado.");
    } else{
        printf("\nDesconto especial nao aplicado.");
    }
	return 0;	
}