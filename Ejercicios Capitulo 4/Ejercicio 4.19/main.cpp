#include <iostream>
using namespace std;

int main() {
    int contador = 1;
    int numero, mayor1, mayor2,cambio ;

    cout << "Ingrese el numero 1: "<<endl;
    cin >> mayor1;
    cout << "Ingrese el numero 2: "<<endl;
    cin >> mayor2;

    if (mayor2 > mayor1)
        {
        cambio = mayor1;
        mayor1 = mayor2;
        mayor2 = cambio;
    }

    while (contador < 10)
        {
        cout << "Ingrese el numero " << contador + 1 << endl ;
        cin >> numero;

        if (numero > mayor1)
            {
            mayor2 = mayor1;
            mayor1 = numero;
        }
        else if (numero > mayor2)
        {
            mayor2 = numero;
        }

        contador++;
    }

    cout << "Los dos valores mayores son: " << mayor1 << " y " << mayor2 << endl;

    return 0;
}

