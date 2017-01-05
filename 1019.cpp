/*
URI Online Judge | 1019
Conversão de Tempo
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada

O arquivo de entrada contém um valor inteiro N.

Saída

Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.

Exemplo de Entrada	Exemplo de Saída
556
0:9:16
1
0:0:1
140153
38:55:53
*/
#include <iostream>
#include <stdio.h>    /* printf */
#include <math.h>     /* abs */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int tempo, hora=0, minuto=0, segundo=0;
	
	scanf("%d",&tempo);
	
	hora = tempo / 3600;
	minuto = (tempo - hora*3600) / 60;
	segundo = (tempo - hora*3600 - minuto*60);

	printf("%d:%d:%d\n",hora ,minuto, segundo);
	
	return 0;
	
}
