// 32.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, num6;
    cout << "\n\n 32.- Comparar 2 triangulos para ver si son congruentes\n";
    cout << "---------------------------------------------------------\n";
    cout << " Lado 1 triangulo 1: ";
    cin >> num1;
    cout << " Lado 2 triangulo 1: ";
    cin >> num2;
    cout << " Lado 3 triangulo 1: ";
    cin >> num3;
    cout << " Lado 1 triangulo 2: ";
    cin >> num4;
    cout << " Lado 2 triangulo 3: ";
    cin >> num5;
    cout << " Lado 3 triangulo 4: ";
    cin >> num6;

    if (num1 == num4)
    {
        if (num2 == num5) 
        {
            if (num3 == num6) 
            {
                cout << " Los triangulos son congruentes";
            }
            else
            {
                cout << " Triangulo no congruente";
            }
        }
        else
        {
            cout << " Triangulo no congruente";
        }    
    }
    else 
    {
        cout << " Triangulo no congruente";
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
