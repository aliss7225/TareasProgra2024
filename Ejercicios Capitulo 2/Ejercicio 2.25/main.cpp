#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Pedir al usuario que ingrese dos enteros
    cout << "Ingrese el primer número entero: ";
    cin >> num1;
    cout << "Ingrese el segundo número entero: ";
    cin >> num2;

    // Verificar si num1 es múltiplo de num2
    if (num1 % num2 == 0) {
        cout << num1 << " es múltiplo de " << num2 << endl;
    } else {
        cout << num1 << " no es múltiplo de " << num2 << endl;
    }

    return 0;
}
