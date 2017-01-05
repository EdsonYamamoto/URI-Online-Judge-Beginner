/*
URI Online Judge | 1010
Cálculo Simples
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada

O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Saída

A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.

Exemplos de Entrada	Exemplos de Saída
12 1 5.30
16 2 5.10
VALOR A PAGAR: R$ 15.50
13 2 15.30
161 4 5.20
VALOR A PAGAR: R$ 51.40
1 1 15.10
2 1 15.10
VALOR A PAGAR: R$ 30.20
*/
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, codigoPecaA[1], codigoPecaB[1] ;
	double codigoPeca1, codigoPeca2, valorPagar, A, B, C;
	
	for(i=0;i<=1;i++)
		scanf("%d",&codigoPecaA[i]);
	scanf("%lf",&codigoPeca1);
		
	for(i=0;i<=1;i++)
		scanf("%d",&codigoPecaB[i]);
	scanf("%lf",&codigoPeca2);
	
	valorPagar = (double) codigoPeca1 * codigoPecaA[1] + codigoPeca2 * codigoPecaB[1];

	
	printf("VALOR A PAGAR: R$ %.2lf\n",valorPagar);
	
	return 0;
	
}
