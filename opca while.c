#include <stdio.h>
#include <stdlib.h>

int main (main){
	
	int dias, opcao;
	
	opcao =1;
	while (opcao == 1){

	printf ("Digite um numero para o dia da semana : \n");
	scanf("%d", &dias);
	
	switch (dias){
	
	case 1:
	printf ("O dia da semana e : %d - DOMINGO \n", dias);	
	break;
		
	case 2:
	printf ("O dia da semana e : %d - SEGUNDA-FEIRA \n", dias);
	break;
	
	case 3:
	printf ("O dia da semana e : %d - TERÇA-FEIRA \n", dias);
	break;
	
    case 4:
	printf ("O dia da semana e : %d - QUARTA-FEIRA \n", dias);
	break;
	
	case 5:
	printf ("O dia da semana e : %d - QUINTA-FEIRA \n", dias);
	break;
	
	case 6:
	printf ("O dia da semana e : %d - SEXTA-FEIRA \n", dias);
	break;
	
	case 7:
	printf ("O dia da semana e : %d - SABADO \n", dias);
	break;
	
	default:
	printf ("Nao e dia da semana ! \n");
	break;
}

	printf ("\n");
	printf ("Tecla 1 para continuar ou qualquer numero para sair :");
	scanf ("%d", &opcao);
	
	if (opcao==1)
	system ("cls");
}

	
	system ("pause");
	return 0;
	
}
