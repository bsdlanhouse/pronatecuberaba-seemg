#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int quantidademinima, quantidademaxima, estoquemedio; 
	printf("Digite a quantidademinima : \n");
	scanf("%d", &quantidademinima);
	
	printf("\n");
	printf("Digite a quantidademaxima : \n");
	scanf("%d", &quantidademaxima);
	
	printf("\n");
	estoquemedio = (quantidademinima + quantidademaxima)/2 ;
	
	printf("A quantidade media e: %d unidades \n", estoquemedio);
	
	if(estoquemedio <=100)
	printf("O estoque precisa ser reabastecido \n");
	
	else
	printf("O estoque esta normal \n");
	
	printf("\n");
	system("pause");
	return 0;
	}
