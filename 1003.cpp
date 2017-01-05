/*
URI Online Judge | 1003
Soma Simples
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

Entrada

O arquivo de entrada contém 2 valores inteiros.

Saída

Imprima a variável SOMA com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

Exemplos de Entrada	Exemplos de Saída
30
10
SOMA = 40
-30
10
SOMA = -20
0
0
SOMA = 0
*/

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int A, B, SOMA;
	scanf("%d",&A);
	scanf("%d",&B);
	SOMA=A+B;
	printf("SOMA = %i\n",SOMA);
	
	return 0;
	
}
