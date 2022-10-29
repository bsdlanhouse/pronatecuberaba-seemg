#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int codigodapeca; 
	float valordapeca, quantidadepecas; 
	
	printf("Digite o codigo da peca : \n");
	scanf("%d", &codigodapeca);

	printf("\n");
	printf("Digite o valor da peca : \n");
	scanf("%f", &valordapeca);
	
	printf("\n");
	printf("Digite a quantidade de pecas : \n");
	scanf("%f", &quantidadepecas);
	
	printf("\n");
	valordapeca = quantidadepecas * valordapeca;
	
	printf("O codigo da peca e: %03d \n", codigodapeca);
	printf("O valor das pecas e: R$ %.2f \n", valordapeca);
	
	system("pause");
	return 0;
	
	}
