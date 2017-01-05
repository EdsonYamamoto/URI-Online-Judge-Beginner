/*
URI Online Judge | 1012
Área
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre: 
a) a área do triângulo retângulo que tem A por base e C por altura. 
b) a área do círculo de raio C. (pi = 3.14159) 
c) a área do trapézio que tem A e B por bases e C por altura. 
d) a área do quadrado que tem lado B. 
e) a área do retângulo que tem lados A e B. 
Entrada

O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída

O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
*/

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double pi=3.14159, A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
	
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	
	TRIANGULO = A * C / 2;
	
	CIRCULO = pi * C * C;
	
	if (A>B)
		TRAPEZIO = B * C + (A - B) * C / 2;
	else
		TRAPEZIO = A * C + (B - A) * C / 2;
	
		
	QUADRADO = B * B;
	
	RETANGULO = A * B;

	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO ,CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
	
	return 0;
	
}
