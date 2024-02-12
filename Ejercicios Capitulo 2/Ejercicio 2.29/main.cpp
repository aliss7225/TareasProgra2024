#include <iostream>
using namespace std;

int main() {
    cout << "Entero  Cuadrado  Cubo" << endl;

    for (int i = 0; i <= 10; ++i) {
        int cuadrado = i * i;
        int cubo = i * i * i;
        cout << i << "       " << cuadrado << "        " << cubo << endl;
    }

    return 0;
}
