#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main () {
    ifstream archivo("enunciado.txt");
    if (archivo.is_open()) {
        string linea, alreves = "";
        int cantidad = 0;
        while(getline(archivo, linea)) {
            cantidad++;
        }
        archivo.close();
        int medio = cantidad / 2;
        cout << medio << endl;
        string evaluar = "";
        cantidad = 0;
        archivo.open("enunciado.txt");
        while(getline(archivo, linea)) {
            if (cantidad == medio) {
                evaluar += linea;
            }
            cantidad++;
        }
        for (int i = evaluar.length() - 1; i >= 0; i--)
        {
            alreves = alreves + evaluar[i];
        }
        cout << evaluar << endl;
        if (evaluar == alreves) {
            cout << "Es" << endl;
        } else {
            cout << "No es" << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo" << endl;
    }
    return 0;
}