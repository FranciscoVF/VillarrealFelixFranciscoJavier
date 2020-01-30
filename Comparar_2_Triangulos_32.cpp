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
