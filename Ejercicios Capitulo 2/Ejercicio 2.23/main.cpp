#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    cout << "Ingrese el primer n�mero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo n�mero entero: ";
    cin >> num2;
    cout << "Ingrese el tercer n�mero entero: ";
    cin >> num3;
    cout << "Ingrese el cuarto n�mero entero: ";
    cin >> num4;
    cout << "Ingrese el quinto n�mero entero: ";
    cin >> num5;

    int menor = num1;
    int mayor = num1;

    if (num2 < menor) {
        menor = num2;
    } else if (num2 > mayor) {
        mayor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    } else if (num3 > mayor) {
        mayor = num3;
    }

    if (num4 < menor) {
        menor = num4;
    } else if (num4 > mayor) {
        mayor = num4;
    }

    if (num5 < menor) {
        menor = num5;
    } else if (num5 > mayor) {
        mayor = num5;
    }


    cout << "El menor n�mero es: " << menor << endl;
    cout << "El mayor n�mero es: " << mayor << endl;

    return 0;
}
