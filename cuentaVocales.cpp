#include <iostream>
using namespace std;
string vocales = "aeiou";
void contarVocales();

int main() {
    char salir;
    do {
        contarVocales();
        cout << "Desea evaluar otro nombre presione s de lo contrario cualquier tecla: ";
        cin.ignore();
        cin >> salir;
    } while (salir == 'S' || salir == 's');
    return 0;
}

void contarVocales(){
    string nombre;
    cout << "Ingrese nombre completo: ";
    getline(cin, nombre);
    int cantidad;
    for (int i = 0; i < nombre.length(); i++)
    {
        char letra = tolower(nombre[i]);
        for (int j = 0; j < vocales.length(); j++)
        {
            char vocal = vocales[j];
            if (letra == vocal) {
                cantidad++;
            }
        }
    }
    cout << "El nombre: " << nombre << " tiene " << cantidad << " vocales\n";
}