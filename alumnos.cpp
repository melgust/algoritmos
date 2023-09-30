//Encuentra el abanderado
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <fstream>

using namespace std;

typedef struct {
    string nombre;
    int clave;
    //int notas[4];
} Alumno;

int main() {
    srand (time(NULL));
    int cantidad;
    cout << "Cuantos alumnos desea almacenar: ";
    cin >> cantidad;
    cin.ignore();
    Alumno alumnos[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        Alumno alumno;
        cout << "Ingrese nombre del alumno " << i + 1 << ": ";
        getline(cin, alumno.nombre);
        alumno.clave = i + 1;
        /*for (int j = 0; j < 4; j++) {
            alumno.notas[j] = rand() % 100 + 1;
        }*/
        alumnos[i] = alumno;
    }
    Alumno abanderado;
    int promedioAbanderado;
    for (int i = 0; i < cantidad; i++)
    {
        Alumno alumno = alumnos[i];
        cout << alumno.clave << ". " << alumno.nombre << " notas: ";
        int promedio = 0;
        /*for (int j = 0; j < 4; j++) {
            promedio = promedio + alumno.notas[j];
            cout << alumno.notas[j] << ", ";
        }*/
        promedio = promedio / 4;
        if (i == 0) {
            abanderado = alumno;
            promedioAbanderado = promedio;
        }
        cout << "promedio: " << promedio;
        if (promedio > promedioAbanderado) {
            abanderado = alumno;
            promedioAbanderado = promedio;
        }
        cout << endl;
    }
    cout << "El abanderado es: " << abanderado.nombre << " con " << promedioAbanderado << " puntos." << endl;
    ofstream outfile("data.dat", ios::out | ios::binary);
    if (!outfile) {
        cout << "No se puede abrir el archivo";
        return -1;
    }
    outfile.write((char *) &alumnos[0], sizeof(Alumno));
    outfile.close();
}