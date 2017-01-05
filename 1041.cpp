/*
URI Online Judge | 1041
Coordenadas de um Ponto
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).



Se o ponto estiver na origem, escreva a mensagem “Origem”.

Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

Entrada

A entrada contem as coordenadas de um ponto.

Saída

A saída deve apresentar o quadrante em que o ponto se encontra.

Exemplo de Entrada	Exemplo de Saída
4.5 -2.2
Q4
0.1 0.1
Q1
0.0 0.0
Origem
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float x=0, y=0;
	scanf("%f",&x);
	scanf("%f",&y);
	
	
	if(x>0)
	{
		if(y>0)
		{
			printf("Q1\n");
		}
		else
			printf("Q4\n");
	}
	
	else if(x<0)
	{
		if(y>0)
		{
			printf("Q2\n");
		}
		else
			printf("Q3\n");
	}
	
	else
	{
		printf("Origem\n");
	}
	
	return 0;
}
