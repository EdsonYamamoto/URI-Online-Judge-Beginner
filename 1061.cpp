/*
URI Online Judge | 1061
Tempo de um Evento
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo em segundos que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento..

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada

Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída

Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

Exemplo de Entrada	Exemplo de Saída
Dia 5
08 : 12 : 23
Dia 9
06 : 13 : 23
3 dia(s)
22 hora(s)
1 minuto(s)
0 segundo(s)
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int armazenaInt();
int armazenaDataEvento();
void calcTempoTotal(int duracao);
int main(int argc, char const *argv[])
{
	int eventoInicio, eventoFim;
	eventoInicio = armazenaDataEvento();
	eventoFim = armazenaDataEvento();
	calcTempoTotal(eventoFim - eventoInicio);

	system("PAUSE");
	return 0;
}


int armazenaInt()
{
	int valor;	
	scanf("%i", &valor);
	fflush(stdin);

	return valor;
}

int armazenaDataEvento()
{
	int segundos, segundo, minuto, hora, dia;
	printf("Dia ");
	dia = armazenaInt();
	hora = armazenaInt();
	minuto = armazenaInt();
	segundo = armazenaInt();

	segundos = segundo + minuto*60 + hora*3600 + dia*3600*24;

	return segundos;
}

void calcTempoTotal(int duracao)
{
	int dias, horas, minutos, segundos;
	dias = duracao/(3600*24);
	horas = duracao%(3600*24)/3600;
	minutos = duracao%(3600*24)%3600/60;
	segundos = duracao%(3600*24)%3600%60;
	printf("%i dia(s)\n%i hora(s)\n%i minuto(s)\n%i segundo(s)\n",dias, horas, minutos, segundos);
}