/*
URI Online Judge | 1021
Notas e Moedas
Por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada

O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída

Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Exemplo de Entrada	Exemplo de Saída
576.73
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
4.00
NOTAS:
0 nota(s) de R$ 100.00
0 nota(s) de R$ 50.00
0 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
2 nota(s) de R$ 2.00
MOEDAS:
0 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
0 moeda(s) de R$ 0.01
91.01
NOTAS:
0 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
2 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
1 moeda(s) de R$ 0.01
*/

#include <iostream>
#include <stdio.h>    /* printf */
#include <math.h>     /* abs */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float ced;
	int moeda, cedula, ced1=0, ced2=0, ced5=0, ced10=0, ced20=0, ced50=0, ced100=0, moe100=0, moe50=0, moe25=0, moe10=0,moe05=0, moe01=0;
	
	scanf("%f",&ced);
	
	cedula = (float) ced;
	moeda = (float) ced * 100;
	
	ced100 = cedula /100;
	ced50 = (cedula % 100) /50;
	ced20 = ((cedula % 100) % 50) /20;
	ced10 = (((cedula % 100) % 50) %20) /10;
	ced5 = ((((cedula % 100) % 50) %20) %10) /5;
	ced2 = (((((cedula % 100) % 50) %20) %10) %5) /2;
	moe100 = ((((((cedula % 100) % 50) %20) %10) %5) %2) /1;
	moe50 = (moeda - cedula*100)/50;
	moe25 = ((moeda - cedula*100) % 50) /25;
	moe10 = (((moeda - cedula*100) % 50) %25) /10;
	moe05 = ((((moeda - cedula*100) % 50) %25) %10) /5; 
	moe01 = (((((moeda - cedula*100) % 50) %25) %10) %5) /1; 

	printf("NOTAS:\n%d nota(s) de R$ 100.00\n",ced100);
	printf("%d nota(s) de R$ 50.00\n", ced50);
	printf("%d nota(s) de R$ 20.00\n", ced20);
	printf("%d nota(s) de R$ 10.00\n", ced10);
	printf("%d nota(s) de R$ 5.00\n", ced5);
	printf("%d nota(s) de R$ 2.00\n", ced2);
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",moe100 );
	printf("%d moeda(s) de R$ 0.50\n", moe50);
	printf("%d moeda(s) de R$ 0.25\n", moe25);
	printf("%d moeda(s) de R$ 0.10\n", moe10);
	printf("%d moeda(s) de R$ 0.05\n", moe05);
	printf("%d moeda(s) de R$ 0.01\n", moe01);
	
	return 0;
	
}
