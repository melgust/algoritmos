//Aplicacion que imprime 10 veces hola mundo
#include <iostream>
using namespace std;
int main() {
    int i = 10;
    while (i < 10)
    {
       cout << i + 1 << ". Hola mundo" << endl;
       i++;
    }
    return 0;
}