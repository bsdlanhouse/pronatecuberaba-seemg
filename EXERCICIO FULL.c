#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	 
 int main (void){
 	
 	setlocale (LC_ALL, "Portuguese");
 	
	float num1, num2, somar, subtrair, multiplicar, dividir, sair; 
	char opcao ='S';
	while (opcao == 'S'){
	
		 
 	printf ("MENU \n \n");
 	printf ("1 - SOMAR \n");
 	printf ("2 - SUBTRAIR \n");
 	printf ("3 - MULTIPLICAR \n");
 	printf ("4 - DIVIDIR \n");
 	printf ("0 - SAIR \n");
 	
  	printf("\n");
	printf("Escolha uma opcao : \n");
 	scanf("%d", &opcao);
 	printf("\n");
 	
 	switch (opcao){
	
	case 1:
	printf("Digite o primeiro numero : \n");
	scanf("%d", &num1);
	
	printf("\n");
	printf("Digite o segundo numero : \n");
	scanf("%d", &num2);
	
	printf("\n");
	somar = num1 + num2;
	printf("O resultado da soma e: %d \n", somar);
	break;
	
	case 2:
	printf("Digite o primeiro numero : \n");
	scanf("%d", &num1);
	
	printf("\n");
	printf("Digite o segundo numero : \n");
	scanf("%d", &num2);
	
	printf("\n");
	subtrair = num1 - num2;
	printf("O resultado da subtracao e: %d \n", subtrair);
	break;
	
	case 3:
	printf("Digite o primeiro numero : \n");
	scanf("%d", &num1);
	
	printf("\n");
	printf("Digite o segundo numero : \n");
	scanf("%d", &num2);
	
	printf("\n");
	multiplicar = num1 * num2;
	printf("O resultado da multiplicacao e: %d \n", multiplicar);
	break;
	
	case 4:
	printf("Digite o primeiro numero : \n");
	scanf("%f", &num1);
	
	printf("\n");
	printf("Digite o segundo numero : \n");
	scanf("%f", &num2);
	
	while (num2<=0){
	printf("\n");
	printf("O denominador deve ser maior que 0. Redigite : \n");
	scanf("%f", &num2);
	}
			
	printf("\n");
	dividir = num1 / num2;
	printf("O resultado da divisao e: %f \n", dividir);
	break;

	case 0:
	exit(0);
	break;
	
		
	default:
	printf ("Nao e uma opcao valida \n");
	break;
	
	 }
 	
	printf ("\n");
	printf ("Deseja continuar ? S/N ");
	scanf (" %c",&opcao);
	opcao = toupper (opcao);
	
	if (opcao == 'S')
	system ("cls");
}
	
	system("pause");
	return 0;	
}
	 
 	
 	
 
