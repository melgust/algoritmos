//Aplicacion que imprime 10 veces hola mundo
#include <iostream>
using namespace std;
int main() {
    int i = 0;
    do {
       cout << i + 1 << ". Hola mundo" << endl;
       i++;
    }while (i < 10);
    return 0;
}