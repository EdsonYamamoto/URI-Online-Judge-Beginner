/*
URI Online Judge | 1015
Distância Entre Dois Pontos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia =

Entrada

O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída

Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.

Exemplo de Entrada	Exemplo de Saída
1.0 7.0
5.0 9.0
4.4721
-2.5 0.4
12.1 7.3
16.1484
2.5 -0.4
-12.2 7.0
16.4575
*/

#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>     /* pow */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double x1, y1, x2, y2, Distancia;
	
	scanf("%lf",&x1);
	scanf("%lf",&y1);
	
	scanf("%lf",&x2);
	scanf("%lf",&y2);
	
	Distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

	printf("%.4lf\n",Distancia );
	
	return 0;
	
}
