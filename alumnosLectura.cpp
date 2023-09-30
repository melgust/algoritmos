//Encuentra el abanderado
#include <iostream>
#include <fstream>

using namespace std;

typedef struct {
    string nombre;
    int clave;
    int notas[4];
} Alumno;

int main() {
    srand (time(NULL));
    Alumno alumno;
    ifstream infile("data.dat", ios::in | ios::binary);
    if (!infile) {
        cout << "No se puede abrir el archivo";
        return -1;
    }
    infile.read((char *) &alumno, sizeof(Alumno));
    //Alumno alumno = alumnos[0];
    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Clave: " << alumno.clave << endl;
    infile.close();
}