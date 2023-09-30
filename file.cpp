#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

typedef struct {
    int carId;
    string name;
} Car;

int main () {
    Car c;
    cout << "Escriba el nombre del vehiculo: ";
    getline(cin, c.name);
    c.carId = 1;
    ofstream outfile("data.dat", ios::out | ios::binary);
    if (!outfile) {
        cout << "No se puede abrir el archivo";
        return -1;
    }
    outfile.write((char *) &c, sizeof(Car));
    outfile.close();
    ifstream infile("data.dat", ios::in | ios::binary);
    if (!infile) {
        cout << "No se puede abrir el archivo";
        return -1;
    }
    infile.read((char *) &c, sizeof(Car));
    cout << "ID del vehiculo: " << c.carId << endl;
    cout << "Nombre del vehiculo: " << c.name << endl;
    infile.close();
    return 0;
}
