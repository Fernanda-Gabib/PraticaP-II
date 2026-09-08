#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//sistema de compra de combustível

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
   int opcao;
   float litros, total;

   printf("=== Combustiveis ===\n");
   printf("1 - Gasolina (R$6,20)\n");
   printf("2 - Etanol (R$4,30)\n");
   printf("3 - Diesel (R$6,00)\n");
   printf("Escolha uma opcao: ");
   scanf("%d", &opcao);
   printf("Digite a quantidade de litros: ");
   scanf("%f", &litros);

   switch(opcao){
       case 1:
       total = litros * 6.20;
           printf("\nValor inicial: R$ %.2f", total);
       break;
       case 2:
           total = litros * 4.30;
           printf("\nValor inicial: R$ %.2f", total);
       break;
       case 3:
           total = litros * 6.00;
           printf("\nValor inicial: R$ %.2f", total);
       break;
       default:
           printf("\nOpcao invalida.");
   }

   if (total > 200 && total <= 300){
       printf("\nDesconto de 5%% aplicado: R$ %.2f", total * 0.05);
       printf("\nValor final a pagar: R$ %.2f", total * 0.95);
   } else if (total > 300){
       printf("\nDesconto de 3%% aplicado: R$ %.2f", total * 0.03);
       printf("\nValor final a pagar: R$ %.2f", total * 0.97);
   } else{
       printf("\nSem desconto.");
   }

	return 0;	
}