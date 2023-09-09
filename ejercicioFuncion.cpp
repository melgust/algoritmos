#include <iostream>
#include <string>

using namespace std;
string vocales = "aeiou";
void contarVocales() {
    string nombre;
    cout << "Ingrese su nombre completo: ";
    getline(cin, nombre);
    int cantidadVocales = 0;
    for (int i = 0; i < nombre.length(); i++)
    {
        char letra = tolower(nombre[i]);
        for (int j = 0; j < vocales.length(); j++)
        {
            char vocal = vocales[j];
            if (vocal == letra) {
                cantidadVocales++;
            }
        }
    }
    cout << "El nombre " << nombre << " tiene " << cantidadVocales << " de vocales" << endl;
}

int main() {
    int cantidad;
    cout << "Cuantos nombres quiere: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        contarVocales();
    }
    return 0;
}