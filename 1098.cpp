/*
URI Online Judge | 1098
Sequencia IJ 4
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada

Não há nenhuma entrada neste problema.

Saída

Imprima a sequencia conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	float I=0, J=1, aux=0; 
	printf("I=%f J=%f \n",I ,J);
	do{
		I += 0.2;
		for (int i = 0; i < 3; i++)
		{
			J += 0.2;
			printf("I=%f J=%f \n",I ,J);
		}
	} while(I<2);
	system("PAUSE");
	return 0;
}