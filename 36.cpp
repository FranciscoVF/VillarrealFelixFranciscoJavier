// 36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float l1, l2, l3, s, area;
	int ent1, ent2, ent3, areai;

	printf("Ingresa el lado 1 del triangulo: ");
	scanf_s("%f", &l1);
	printf("Ingrese el lado 2 del triangulo: ");
	scanf_s("%f", &l2);
	printf("Ingrese el lado 3 del triangulo: ");
	scanf_s("%f", &l3);

	ent1 = l1;
	ent2 = l2;
	ent3 = l3;

	s = (l1 + l2 + l3) / 2;
	area = sqrt(s * ((s - l1) * (s - l2) * (s - l3)));
	areai = area;

	if (l1 < 1000) 
	{
		if (l2 < 1000)
		{
			if (l3 < 1000)
			{
				if (l1 - ent1)
				{
					//decimal
					if (l2 - ent2)
					{
						//decimal
						if (l3 - ent3)
						{
							//decimal
							if (area - areai)
							{
								//decimal
								printf("El area y los lados son decimales.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
							else
							{
								//entero
								printf("El area es entera y los lados son decimales.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
						}
						else
						{
							//entero
							if (area - areai)
							{
								//decimal
								printf("El area es eecimal y los lado 3 es entero.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
							else
							{
								//entero
								printf("El area es entera y el lado 3 es entero.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
						}
					}
					else
					{
						//entero
						if (l3 - ent3)
						{
							//decimal
							if (area - areai)
							{
								//decimal
								printf("El area es decimal y el lado 2 es entero.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
							else
							{
								//entero
								printf("El area es entera y el lado 2 es entero.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
						}
						else
						{
							//entero
							if (area - areai)
							{
								//decimal
								printf("El area es decimal y el lado 2 y 3 son enteros.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
							else
							{
								//entero
								printf("El area es entera y el lado 2 y 3 son enteros.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
						}
					}
				}
				else 
				{
					//entero
					if (l2 - ent2)
					{
						//decimal
						if (l3 - ent3)
						{
							//decimal
							if (area - areai)
							{
								//decimal
								printf("El area es decimal y el lado 1 es entero.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
							else
							{
								//entero
								printf("El area es entero y el lado 1 es entero.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
						}
						else
						{
							//entero
							if (area - areai)
							{
								//decimal
								printf("El area es decimal y el lado 1 y 3 son enteros.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
							else
							{
								//entero
								printf("El area es entera y el lado 1 y 3 son enteros.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
						}
					}
					else
					{
						//entero
						if (l3 - ent3)
						{
							//decimal
							if (area - areai)
							{
								//decimal
								printf("El area es decimal y el lado 3 es decimal.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
							else
							{
								//entero
								printf("El area es entera y solo el lado 3 es decimal\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
						}
						else
						{
							//entero
							if (area - areai)
							{
								//decimal
								printf("Los lados son enteros pero el area es decimal.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
							else
							{
								//entero
								printf("Todos los lados son entero y el area es entera.\n");
								printf("Lado 1: %f", l1);
								printf("\n");
								printf("Lado 2: %f", l2);
								printf("\n");
								printf("Lado 3: %f", l3);
								printf("\n");
								printf("Area: %f", area);
							}
						}
					}
				}
			}
			else 
			{
				printf("Uno de los lados excede del 1000");
			}
		}
		else
		{
			printf("Uno de los lados excede del 1000");
		}
	}
	else
	{
		printf("Uno de los lados excede del 1000");
	}
}