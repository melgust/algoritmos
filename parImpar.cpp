/*
Programa que determina si el numero entero ingresa por el usuario
es par o es impar
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese el numero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par";
    } else {
        cout << "El numero " << numero << " es impar";
    }
    cout << "\nHasta vista\n";
    return 0;
}