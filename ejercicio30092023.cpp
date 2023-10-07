#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main() {
    fstream archivo("archivo.txt");
    if (!archivo.is_open()) {
        cout << "No se puedo abrir el archivo" << endl;
    } else {
        string linea, alreves = "";
        getline(archivo, linea);
        for (int i = linea.length() - 1; i >= 0; i--)
        {
            alreves = alreves + linea[i];
        }
        if (linea == alreves) {
            cout << "Palindroma" << endl;
        } else {
            cout << "No es palindroma" << endl;
        }
        cout << linea << endl;
        cout << alreves << endl;
    }
    return 0;
}