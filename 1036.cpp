/*
URI Online Judge | 1036
Fórmula de Bhaskara
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada

Leia três valores de ponto flutuante (double) A, B e C.

Saída

Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.
*/

#include <iostream>
#include <stdio.h>    /* printf */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double A, B, C, delta, raiz1, raiz2;
	
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	
	delta = pow(B, 2) - 4 * A * C;
	
	if(delta >= 0 )
	{
		raiz1= (-B + sqrt(delta) )/ (2 * A);
		raiz2= (-B - sqrt(delta) )/ (2 * A);
		printf("R1 = %.5lf\n",raiz1);
		printf("R2 = %.5lf\n",raiz2);
	}	
	else
		printf("Impossivel calcular\n");

	
	return 0;
	
}
