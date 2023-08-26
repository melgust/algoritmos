/***
 * Autor: Melvin Cali
 * De 10 numeros determinar el mayor y menor
*/
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;
int main() {
    srand (time(NULL));
    int filas, columnas;    
    cout << "Cantidad de filas: ";
    cin >> filas;
    cout << "Cantidad de columnas: ";
    cin >> columnas;
    int matriz1[filas][columnas], matriz2[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz1[i][j] = rand() % 100 + 1;
        }
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz2[i][j] = rand() % 100 + 1;
        }
    }
    cout << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz1[i][j] + matriz2[i][j] << "\t";
        }
        cout << endl;
    }
}