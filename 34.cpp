// 34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
	float x1, x2, x3, y1, y2, y3, area;

	printf("Ingresar coordenada x del punto 1 del triangulo: ");
	scanf_s("%f", &x1);
	printf("Ingresar coordenada y del punto 1 del triangulo: ");
	scanf_s("%f", &y1);
	printf("Ingresar coordenada x del punto 1 del triangulo: ");
	scanf_s("%f", &x2);
	printf("Ingresar coordenada y del punto 1 del triangulo: ");
	scanf_s("%f", &y2);
	printf("Ingresar coordenada x del punto 1 del triangulo: ");
	scanf_s("%f", &x3);
	printf("Ingresar coordenada y del punto 1 del triangulo: ");
	scanf_s("%f", &y3);

	area = labs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;

	printf_s("El area del triangulo es %f", area);
}
