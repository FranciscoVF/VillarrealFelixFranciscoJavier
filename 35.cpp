// 35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    int a = 6;
    int b = 8;
    int c = 10;
    int s;
    float area;
    cout << "Medida del lado 1 del triangulo: " << a << "\n";
    cout << "Medida del lado 2 del triangulo: " << b << "\n";;
    cout << "Medida del lado 3 del triangulo: " << c << "\n";
    s = (a + b + c) /2;
    cout << "S es igual a: " << s << "\n";

    area = sqrt(s * ((s - a) * (s - b) * (s - c)));
    
    cout << "Area es igual a: " << area << "\n";
}