// 37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
    float s, area;
    printf("Ingresa la medida de un lado: ");
    scanf_s("%f", &s);

    area = (s * s);

    printf("\nEl area de tu cuadrado es: %f",area);
}
