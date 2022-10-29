#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num1, num2, subtracao; 
	printf("Digite o primeiro numero : \n");
	scanf("%d", &num1);
	
	printf("\n");
	printf("Digite o segundo numero : \n");
	scanf("%d", &num2);
	
	printf("\n");
	subtracao = num1 - num2;
	printf("O resultado da subtracao e: %d \n", subtracao);
	system("pause");
	return 0;
	}
