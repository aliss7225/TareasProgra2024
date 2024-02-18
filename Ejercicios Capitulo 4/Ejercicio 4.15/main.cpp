#include <iostream>

using namespace std;

int main() {
    float ventas, salario;
    int sueldo_fijo = 200, parar = -1;

    cout << "Introduzca las ventas en dolares (o presione -1 para salir)" << endl;
    cin >> ventas;

    while (ventas != parar) {
        salario = sueldo_fijo + ((ventas * 9) / 100);
        cout << "El salario es: $" << salario << endl;

        cout << "Introduzca las ventas en dolares (o presione -1 para salir)" << endl;
        cin >> ventas;
    }

    return 0;
}

