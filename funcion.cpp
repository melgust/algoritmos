/**
 * Realiza una suma cuando los dos numeros sean primos
*/
#include <iostream>
#include <string>

using namespace std;

int suma(int a, int b);
bool esPar(int numero);
bool esPrimo(int numero);
void procedimientoSuma(int a, int b);

int main() {
    int numero1, numero2;
    cout << "Ingrese primer valor: ";
    cin >> numero1;
    cout << "Ingrese segundo valor: ";
    cin >> numero2;
    bool n1EsPrimo = true;
    if (esPrimo(numero1) == true && esPrimo(numero2) == true) {
        if (esPar(numero1 + numero2)) {
            cout << "La suma es: " << suma(numero1, numero2) << endl;
            procedimientoSuma(numero1, numero2);
        }
    }
    return 0;
}

int suma(int a, int b) {
    return a + b;
}

bool esPar(int numero) {
    return (numero % 2) == 0;
}

bool esPrimo(int numero) {
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0) {
            cout << "El numero " << numero << " no es primo, lo puede dividir " << i <<"\n";
            return false;
        }
    }
    return true;
}

void procedimientoSuma(int a, int b){
    cout << "La suma (procedimiento) es: " << a + b << endl;
}