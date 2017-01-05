#include <iostream>
#include <stdio.h>    /* printf */
#include <math.h>     /* abs */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int opcao, qtd;
	float preco;
	
	scanf("%d",&opcao);
	
	scanf("%d",&qtd);
	
	switch(opcao)
	{
		case 1:
			preco = (float) qtd * 4;
			break;
		
		case 2:
			preco = (float) qtd * 4.5;
			break;
		
		case 3:
			preco = (float) qtd * 5;
			break;
		
		case 4:
			preco = (float) qtd * 2.5;
			break;
			
		case 5:
			preco = (float) qtd * 1.5;
			break;
	}
	
	printf("Total: R$ %.2f", preco);
	
	return 0;
	
}
