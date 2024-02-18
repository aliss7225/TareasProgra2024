#include <iostream>
using namespace std;

int main()
{
    int contador = 1, numero, mayor;

    cout << "Ingrese el numero 1: "<< endl;
    cin >> mayor;

    while (contador < 10) {
        cout << "Ingrese el numero " << contador + 1 << endl;
        cin >> numero;

        if (numero > mayor) {
            mayor = numero;
        }

        contador++;
    }

    cout << "El mayor numero ingresado hasta el momento es: " << mayor << endl;

    return 0;
}
