/*
URI Online Judge | 1007
Diferença
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada

O arquivo de entrada contém 4 valores inteiros.

Saída

Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.

Exemplos de Entrada	Exemplos de Saída
5
6
7
8
DIFERENCA = -26
0
0
7
8
DIFERENCA = -56
5
6
-7
8
DIFERENCA = 86
*/

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int A, B, C, D, DIFERENCA;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&D);
	
	DIFERENCA = (A * B - C * D);
		
	printf("DIFERENCA = %d\n",DIFERENCA);
	
	return 0;
	
}
