//Aplicacion que imprime 10 veces hola mundo
#include <iostream>
using namespace std;
int main() {
    int i;
    for (i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << (i + 1) * (j + 1) << ". Hola mundo" << endl;
        }
    }
    return 0;
}