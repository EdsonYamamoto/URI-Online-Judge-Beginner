/*
URI Online Judge | 1018
Cédulas
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada

O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída

Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.

Exemplo de Entrada	Exemplo de Saída
576
576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00
11257
11257
112 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
0 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
1 nota(s) de R$ 2,00
0 nota(s) de R$ 1,00
503
503
5 nota(s) de R$ 100,00
0 nota(s) de R$ 50,00
0 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
0 nota(s) de R$ 5,00
1 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00
*/

#include <iostream>
#include <stdio.h>    /* printf */
#include <math.h>     /* abs */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int cedula, ced1=0, ced2=0, ced5=0, ced10=0, ced20=0, ced50=0, ced100=0;
	
	scanf("%d",&cedula);
	
	ced100 = cedula / 100;
	ced50 = (cedula % 100) / 50;
	ced20 = ((cedula % 100) % 50) /20;
	ced10 = (((cedula % 100) % 50) %20) /10;
	ced5 =  ((((cedula % 100) % 50) %20) %10) /5;
	ced2 =  (((((cedula % 100) % 50) %20) %10) %5) /2;
	ced1 =  ((((((cedula % 100) % 50) %20) %10) %5) %2) /1;

	printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", ced100, ced50, ced20, ced10, ced5, ced2, ced1);
	

	
	return 0;
	
}
