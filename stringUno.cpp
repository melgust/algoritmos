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
    for (int i = 0; i < longitud; i++)
    {
        char letra = tolower(nombre[i]);
        for (int j = 0; j < vocales.length(); j++)
        {
            char vocal = vocales[j];
            if (letra == vocal) {
                nombre[i] = '_';
            }
        }
    }
    cout << nombre << endl;
    return 0;
}