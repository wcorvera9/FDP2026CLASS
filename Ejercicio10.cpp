#include <iostream>
#include <cmath>

using namespace std;

int main () {

    float area, r; 
    float pi = 3.1416; // Usamos float como pediste

    cout << "Bienvenido a calculadora de radio" << endl;
    cout << "Por favor ingrese el radio: " << endl;
    cin >> r;

area = pi * pow(r, 2);
    

    if (area % 2 == 0) 
    {
        cout << "El area del circulo es: " << area << " y es par" << endl;
    }
    else 
    {
        cout << "El area del circulo es: " << area << " y es impar" << endl;
    }

    return 0;
}