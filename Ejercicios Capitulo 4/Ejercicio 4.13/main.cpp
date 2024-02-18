#include <iostream>
using namespace std;

int main() {
    float k_usados, litros, total, suma_K_usados = 0, suma_litros = 0, total_suma;
    float salida = -1;

    cout << "Ingrese la cantidad de kilometros recorridos (o ingrese -1 para salir):" << endl;
    cin >> k_usados;

    while (k_usados != salida) {
        cout << "Ingrese la cantidad de litros de gasolina utilizados:" << endl;
        cin >> litros;

        total = k_usados / litros;
        cout << "KPL en este abastecimiento: " << total << endl;

        suma_K_usados += k_usados;
        suma_litros += litros;

        total_suma = suma_K_usados / suma_litros;
        cout << "Total KPL: " << total_suma << endl;

        cout << "Ingrese la cantidad de kilometros recorridos (o ingrese -1 para salir):" << endl;
        cin >> k_usados;
    }

    return 0;
}
