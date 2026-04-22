#include <iostream>
using namespace std;

int main() {
int celsius, fahrenheit;
 
 cout << "ingrese la temperatura en grados celsius: ";
 cin >> celsius;
 
 fahrenheit = (celsius * 1.8) + 32;
 
 cout << "la temperatura en fahrenheit " << fahrenheit << endl;
 return 0;
}
