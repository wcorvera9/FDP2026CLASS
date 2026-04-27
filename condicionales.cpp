#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n; // Usamos n para todo

    cout << "Por favor ingrese un numero: " << endl ; //salto de linea para un mejor orden.
    cin >> n;

    // Elevamos n a la n y lo guardamos en la misma variable n
    n = pow(n, n); //pow es una funcion de la libreria cmath que eleva el primer numero al segundo numero.

    if (n % 2 == 0)
    {
        cout << "the number: " << n << " is even" << endl; // even (par) o odd (impar).
    }
    else
    {
        cout << "the number: " << n << " is odd" << endl; // even (par) o odd (impar).
    }

    return 0;
}