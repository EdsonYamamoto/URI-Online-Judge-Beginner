/*
URI Online Judge | 1048
Aumento de Salário
Por Neilor Tonin, URI  Brasil
Timelimit: 1
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

15% 0<=salario<=400
12% 401<=salario<=800
10% 801<=salario<=1200
7% 1201<=salario<=2000
4% 2001<=salario

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada

A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída

Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
400.00
Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %
800.01
Novo salario: 880.01
Reajuste ganho: 80.00
Em percentual: 10 %
2000.00
Novo salario: 2140.00
Reajuste ganho: 140.00
Em percentual: 7 %
*/

#include <stdlib.h>
#include <stdio.h>

float armazenaFloat();
void reajuste(float salario);

int main(int argc, char const *argv[])
{
	float salari;
	salari = armazenaFloat();
	reajuste(salari);
	system("PAUSE");
	return 0;
}


float armazenaFloat()
{
	float valor;
	scanf("%f",&valor);
	return valor;
}

void reajuste(float salario)
{
	float novoSalario, percentual;
	if (0<=salario && salario<=400)
	{
		percentual = 15;
	 	novoSalario = salario * 0.15;
	}

	if (401<=salario && salario<=800)
	{
		percentual = 12;
		novoSalario = salario * 0.12;
	}

	if (801<=salario && salario<=1200)
	{
		percentual = 10;
	 	novoSalario = salario * 0.1;
	}

	if (1201<=salario && salario<=2000)
	{
		percentual = 7;
		novoSalario = salario * 0.07;
	}

	if (2001<=salario)
	{
		percentual = 4;
		novoSalario = salario * 0.04;
	}

	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f\n", novoSalario+salario,novoSalario, percentual);
}