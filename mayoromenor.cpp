#include <iostream>
using namespace std;

int main() {
    int temperatura;
    cout << "Ingrese la temperatura del agua: ";
    cin >> temperatura;
    
    if (temperatura < 0) {
        cout << "La temperatura del agua es helada." << endl;
    } else if (temperatura >= 0 && temperatura <= 30) {
        cout << "La temperatura del agua es tibia." << endl;
    } else {
        cout << "La temperatura del agua es caliente." << endl;
    }
    return 0;
}