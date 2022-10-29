#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int dias;
	
	printf ("Digite um numero para o dia da semana : \n");
	scanf("%d", &dias);
	
	if (dias == 1)
	printf ("O dia da semana e : %d - DOMINGO \n", dias);
	
	else if(dias == 2)
	printf ("O dia da semana e : %d - SEGUNDA-FEIRA \n", dias);
	
	else if(dias == 3)
	printf ("O dia da semana e : %d - TERÇA-FEIRA \n", dias);
	
	else if(dias == 4)
	printf ("O dia da semana e : %d - QUARTA-FEIRA \n", dias);
	
	else if(dias == 5)
	printf ("O dia da semana e : %d - QUINTA-FEIRA \n", dias);
	
	else if(dias == 6)
	printf ("O dia da semana e : %d - SEXTA-FEIRA \n", dias);
	
	else if(dias == 7)
	printf ("O dia da semana e : %d - SABADO \n", dias);
	
	else
	printf ("Nao e dia da semana \n", dias);
	
	
	system("pause");
	return 0;
	}
	
