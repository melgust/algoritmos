//Aplicacion que determina el genero
#include <iostream>
using namespace std;
int main() {
    int opcion;
    cout << "Selecciona tu genero" << endl;
    cout << "1. Masculino\n";
    cout << "2. Femenino\n";
    cout << "3. No definido\n";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        cout << "Masculino" << endl;
        break;
    case 2:
        cout << "Femenino\n";
        break;
    case 3:
        cout << "No definido" << endl;
        break;
    default:
        cout << "Insisto, necesitas un curso de lectura y compresion";
        break;
    }
    cout << endl;
    return 0;
}