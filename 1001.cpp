/*
URI Online Judge | 1001
Extremamente Básico
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

Entrada

A entrada contém 2 valores inteiros.

Saída

Imprima a variável X conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade. Obs: O X está em maiúsculo e deve ter um espaço antes e um espaço depois do sinal de igualdade.

Exemplos de Entrada	Exemplos de Saída
10
9
X = 19
-10
4
X = -6
15
-7
X = 8
*/
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int A, B, X;
	scanf("%d",&A);
	scanf("%d",&B);
	X=A+B;
	printf("X = %i\n",X);
	
	return 0;
	
}
