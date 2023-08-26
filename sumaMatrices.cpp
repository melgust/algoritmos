/***
 * Autor: Melvin Cali
 * Suma de dos matrices
*/
#include <iostream>
using namespace std;
int main() {
    int filas, columnas;
    cout << "Cuantas filas: ";
    cin >> filas;
    cout << "Cuantas columnas: ";
    cin >> columnas;
    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            cout << "Ingrese el valor[" << + i + 1 << ", " << j + 1 << "] para ambas matrices ";
            cin >> matriz1[i][j] >> matriz2[i][j];
        }
    }
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            cout << matriz1[i][j] << " + " << matriz2[i][j] << " = " << matriz1[i][j] + matriz2[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}