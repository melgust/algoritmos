/**
 * Valida usuario y contrenia
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string user, password;
    int intentos = 3;
    do
    {
        cout << "Ingrese su usuario: ";
        getline(cin, user);
        cout << "Ingrese su contrasenia: ";
        getline(cin, password);
        if (user == "admin" && password == "1234") {
            cout << "Bienvenido" << endl;
            intentos = 0;
        } else {
            cout << "El usuario o la contrasenia invalidos" << endl;
            intentos--;
        }
    } while (intentos > 0);
    return 0;
}