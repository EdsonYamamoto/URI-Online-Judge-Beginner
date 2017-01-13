/*
URI Online Judge | 1047
Tempo de Jogo com Minutos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada

Quatro números inteiros representando a hora de início e fim do jogo.

Saída

Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .

Exemplo de Entrada	Exemplo de Saída
7 8 9 10
O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
7 7 7 7
O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
7 10 8 9
O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
*/

#include <stdlib.h>
#include <stdio.h>

int armazenaInt();
int temp(int hIni,int mIni,int hFim,int mFim);

int main()
{
	int horaInicio, minutoInicio, horaFim, minutoFim, tempo;
	horaInicio = armazenaInt();
	minutoInicio = armazenaInt();
	horaFim = armazenaInt();
	minutoFim = armazenaInt();
	if (horaInicio == minutoInicio && horaInicio == horaFim && horaFim == minutoFim)
		tempo = 60*24;
	else
		tempo = temp(horaInicio,minutoInicio,horaFim,minutoFim);
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", tempo/60, tempo%60);
	system("PAUSE");
	return 0;
}

int armazenaInt()
{
	int valor;
	scanf("%i",&valor);
	fflush(stdin);

	return valor;
}

int temp(int hIni,int mIni,int hFim,int mFim)
{
	int duracao;
	duracao = hFim*60+mFim-hIni*60-mIni;

	return duracao;
}