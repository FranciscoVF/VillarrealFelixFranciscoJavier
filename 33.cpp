// 33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
    //Triangulo 1
    printf("Ingrese la coordenada en x del triangulo 1 lado 1:");
    scanf_s("%f", &x1);
    printf("Ingrese la coordenada en y del triangulo 1 lado 1:");
    scanf_s("%f", &y1);
    printf("Ingrese la coordenada en x del triangulo 1 lado 2:");
    scanf_s("%f", &x2);
    printf("Ingrese la coordenada en y del triangulo 1 lado 2:");
    scanf_s("%f", &y2);
    printf("Ingrese la coordenada en x del triangulo 1 lado 3:");
    scanf_s("%f", &x3);
    printf("Ingrese la coordenada en y del triangulo 1 lado 3:");
    scanf_s("%f", &y3);
    
    //Triangulo 2
    printf("Ingrese la coordenada en x del triangulo 2 lado 1:");
    scanf_s("%f", &x4);
    printf("Ingrese la coordenada en y del triangulo 2 lado 1:");
    scanf_s("%f", &y4);
    printf("Ingrese la coordenada en x del triangulo 2 lado 2:");
    scanf_s("%f", &x5);
    printf("Ingrese la coordenada en y del triangulo 2 lado 2:");
    scanf_s("%f", &y5);
    printf("Ingrese la coordenada en x del triangulo 2 lado 3:");
    scanf_s("%f", &x6);
    printf("Ingrese la coordenada en y del triangulo 2 lado 3:");
    scanf_s("%f", &y6);
    
    //Verificacion

    if (x4 >= x1) 
    {
        if (y4 <= y1)
        {
            if (x5 >= x1)
            {
                if (y5 <= y1)
                {
                    if (x6 >= x1)
                    {
                        if (y6 <= y1)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x2)
                    {
                        if (y6 <= y2)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x3)
                    {
                        if (y6 <= y3)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else
                    {
                        printf("No esta incrito");
                    }
                }
                else
                {
                    printf("No esta incrito");
                }
            }
            else if (x5 >= x2)
            {
                if (y5 <= y2)
                {
                    if (x6 >= x1)
                    {
                        if (y6 <= y1)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x2)
                    {
                        if (y6 <= y2)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x3)
                    {
                        if (y6 <= y3)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else
                    {
                        printf("No esta incrito");
                    }
                }
                else
                {
                    printf("No esta incrito");
                }
            }
            else if (x5 >= x3)
            {
                if (y5 <= y3)
                {
                    if (x6 >= x1)
                    {
                        if (y6 <= y1)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x2)
                    {
                        if (y6 <= y2)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x3)
                    {
                        if (y6 <= y3)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else
                    {
                        printf("No esta incrito");
                    }
                }
                else
                {
                    printf("No esta incrito");
                }
            }
            else
            {
                printf("No esta incrito");
            }
        }
        else
        {
            printf("No esta inscrito");
        }
    }
    else if (x4 >= x2)
    {
        if (y4 <= y2)
        {
            if (x5 >= x1)
            {
                if (y5 <= y1)
                {
                    if (x6 >= x1)
                    {
                        if (y6 <= y1)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x2)
                    {
                        if (y6 <= y2)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x3)
                    {
                        if (y6 <= y3)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else
                    {
                        printf("No esta incrito");
                    }
                }
                else
                {
                    printf("No esta incrito");
                }
            }
            else if (x5 >= x2)
            {
                if (y5 <= y2)
                {
                    if (x6 >= x1)
                    {
                        if (y6 <= y1)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x2)
                    {
                        if (y6 <= y2)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x3)
                    {
                        if (y6 <= y3)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else
                    {
                        printf("No esta incrito");
                    }
                }
                else
                {
                    printf("No esta incrito");
                }
            }
            else if (x5 >= x3)
            {
                if (y5 <= y3)
                {
                    if (x6 >= x1)
                    {
                        if (y6 <= y1)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x2)
                    {
                        if (y6 <= y2)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x3)
                    {
                        if (y6 <= y3)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else
                    {
                        printf("No esta incrito");
                    }
                }
                else
                {
                    printf("No esta incrito");
                }
            }
            else
            {
                printf("No esta incrito");
            }
        }
        else
        {
            printf("No esta inscrito");
        }
    }
    else if (x4 >= x3)
    {
        if (y4 <= y3)
        {
            if (x5 >= x1)
            {
                if (y5 <= y1)
                {
                    if (x6 >= x1)
                    {
                        if (y6 <= y1)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x2)
                    {
                        if (y6 <= y2)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x3)
                    {
                        if (y6 <= y3)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else
                    {
                        printf("No esta incrito");
                    }
                }
                else
                {
                    printf("No esta incrito");
                }
            }
            else if (x5 >= x2)
            {
                if (y5 <= y2)
                {
                    if (x6 >= x1)
                    {
                        if (y6 <= y1)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x2)
                    {
                        if (y6 <= y2)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x3)
                    {
                        if (y6 <= y3)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else
                    {
                        printf("No esta incrito");
                    }
                }
                else
                {
                    printf("No esta incrito");
                }
            }
            else if (x5 >= x3)
            {
                if (y5 <= y3)
                {
                    if (x6 >= x1)
                    {
                        if (y6<=y1)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x2)
                    {
                        if (y6 <= y2)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else if (x6 >= x3)
                    {
                        if (y6<=y3)
                        {
                            printf("Si esta inscrito");
                        }
                        else
                        {
                            printf("No esta inscrito");
                        }
                    }
                    else
                    {
                        printf("No esta incrito");
                    }
                }
                else
                {
                    printf("No esta incrito");
                }
            }
            else
            {
                printf("No esta incrito");
            }
        }
        else 
        {
            printf("No esta inscrito");
        }
    }
    else
    {
        printf("No esta inscrito");
    }
}
