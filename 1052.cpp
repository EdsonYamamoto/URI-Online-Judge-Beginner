/*
URI Online Judge | 1052
Mês
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.

Entrada

A entrada contém um único valor inteiro.

Saída

Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.

Exemplo de Entrada	Exemplo de Saída
4
April
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int armazenaInt();
void mes(int *numMes, char *nomMes);

int main(int argc, char const *argv[])
{
	int *pontNum;
	char *pontString, nomeMes[15]="";
	pontString = nomeMes;

	*pontNum = armazenaInt();
	mes(pontNum,pontString);

	puts(pontString);
	system("PAUSE");
	return 0;
}

int armazenaInt()
{
	int valor;
	scanf("%i",& valor);
	fflush(stdin);

	return valor;
}

void mes(int *numMes, char *nomMes)
{
	if (*numMes==1)
		strcat(nomMes,"January");
	
	else if (*numMes==2)
		strcat(nomMes,"February");
	
	else if (*numMes==3)
		strcat(nomMes,"March");

	else if (*numMes==4)
		strcat(nomMes,"April");

	else if (*numMes==5)
		strcat(nomMes,"May");

	else if (*numMes==6)
		strcat(nomMes,"June");

	else if (*numMes==7)
		strcat(nomMes,"July");

	else if (*numMes==8)
		strcat(nomMes,"August");

	else if (*numMes==9)
		strcat(nomMes,"September");

	else if (*numMes==10)
		strcat(nomMes,"October");

	else if (*numMes==11)
		strcat(nomMes,"November");

	else if (*numMes==12)
		strcat(nomMes,"December");
}