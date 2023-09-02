/**
 * Convierte las vocales a mayusculas en una oracion
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    string vocales = "aeiou";
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    int longitud = nombre.length();
    cout << "La oracion tiene una longitud de: " << longitud << endl;
    for (int i = 0; i < longitud; i++)
    {
        char a = tolower(nombre[i]);
        for (int j = 0; j < vocales.length(); j++)
        {
            char vocal = vocales[j];
            if (a == vocal) {
                nombre[i] = '_';
            }
        }
    }
    cout << endl << nombre << endl;
    return 0;
}