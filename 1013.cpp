/*
URI Online Judge | 1013
O Maior
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

Entrada

O arquivo de entrada contém três valores inteiros.

Saída

Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".

Exemplos de Entrada	Exemplos de Saída
7 14 106
106 eh o maior
217 14 6
217 eh o maior
*/

#include <iostream>
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int A, B, C, MaiorAB, MaiorABC;
	
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	
	MaiorAB = ( A + B + abs( A - B ) ) / 2;
	MaiorABC = ( MaiorAB + C + abs( MaiorAB - C ) ) / 2;

	printf("%d eh o maior\n",MaiorABC);
	
	return 0;
	
}
