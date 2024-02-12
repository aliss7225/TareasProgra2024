#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingrese el primer número entero: ";
    cin >> num1;
    cout << "Ingrese el segundo número entero: ";
    cin >> num2;
    cout << "Ingrese el tercer número entero: ";
    cin >> num3;

    int suma = num1 + num2 + num3;
    float promedio = suma / 3.0;
    int producto = num1 * num2 * num3;

    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    // Imprimir los resultados
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
    cout << "El producto es: " << producto << endl;
    cout << "El menor es: " << menor << endl;
    cout << "El mayor es: " << mayor << endl;

    return 0;
}
