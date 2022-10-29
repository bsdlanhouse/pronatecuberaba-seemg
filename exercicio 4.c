#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num1, num2, multiplicar; 
	printf("Digite o primeiro numero : \n");
	scanf("%d", &num1);
	
	printf("\n");
	printf("Digite o segundo numero : \n");
	scanf("%d", &num2);
	
	printf("\n");
	multiplicar = num1 * num2;
	printf("O resultado da multiplicacao e: %d \n", multiplicar);
	system("pause");
	return 0;
	}
