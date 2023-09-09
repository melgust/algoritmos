#include <iostream>
#include <string>

using namespace std;

int main() {
    string oracion;
    string nuevo = "";
    cout << "Ingrese texto: ";
    getline(cin, oracion);
    for (int i = oracion.length() - 1; i >= 0; i--)
    {
        cout << oracion[i];
    }
    cout << nuevo << endl;
}