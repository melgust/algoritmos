#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main() {
    srand (time(NULL));
    int cantidad = 0;
    cout << "Cantidad: ";
    cin >> cantidad;
    int vectorUno[cantidad], vectorDos[cantidad];
    int sumaUno = 0, sumaDos = 0;
    for (int i = 0; i < cantidad; i++)
    {
        vectorUno[i] = rand() % 100 + 1;
        vectorDos[i] = rand() % 100 + 1;
    }
    cout << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << vectorUno[i] << " ";
        sumaUno = sumaUno + vectorUno[i];
    }
    cout << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << vectorDos[i] << " ";
        sumaDos = sumaDos + vectorDos[i];
    }
    cout << endl;
    if (sumaUno == sumaDos) {
        cout << "Son iguales" << endl;
    } else {
        if (sumaUno > sumaDos) {
            cout << "Vector A es mayor a vector B";
        } else {
            cout << "Vector B es mayor a vector A";
        }
    }
    return 0;
}