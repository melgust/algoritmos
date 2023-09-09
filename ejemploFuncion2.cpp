#include <iostream>
using namespace std;
bool esPrimo(int numero);
void evaluarCondicion(int x, int y);
int main(){
    int a, b;
    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese segundo numero: ";
    cin >> b;
    evaluarCondicion(a, b);
    return -100; 
}
bool esPrimo(int numero) {
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

void evaluarCondicion(int x, int y){
    if (esPrimo(x) && esPrimo(y)) {
        cout << "La suma es: " << x + y << endl;
    } else {
        cout << "No se cumple la condicion\n";
    }
}