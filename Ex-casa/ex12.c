#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//empéstimo bancário

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
    int idade;
    float renda;

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);
    printf("Digite a renda do cliente: ");
    scanf("%f", &renda);

    if (idade >= 18 && renda >=2000){
        printf("\nEmprestimo aprovado.");
    } else{
        printf("\nEmprestimo reprovado.");
    }

	return 0;	
}