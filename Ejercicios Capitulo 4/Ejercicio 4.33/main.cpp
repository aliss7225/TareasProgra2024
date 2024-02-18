#include <iostream>

using namespace std;

int main() {
    int lado1, lado2, lado3;
    int corto, mediano, largo;

    cout << "Ingrese la Primera medida para el triangulo: ";
    cin >> lado1;
    cout << "Ingrese la Segunda medida para el triangulo: ";
    cin >> lado2;
    cout << "Ingrese la Tercera medida para el triangulo:: ";
    cin >> lado3;

    if (lado1 <= lado2 && lado1 <= lado3)
    {
        corto = lado1;
        mediano = lado2 <= lado3 ? lado2 : lado3;
        largo = lado2 > lado3 ? lado2 : lado3;
    }
    else if (lado2 <= lado1 && lado2 <= lado3)
    {
        corto = lado2;
        mediano = lado1 <= lado3 ? lado1 : lado3;
        largo = lado1 > lado3 ? lado1 : lado3;
    }
    else
    {
        corto = lado3;
        mediano = lado1 <= lado2 ? lado1 : lado2;
        largo = lado1 > lado2 ? lado1 : lado2;
    }

    if (corto * corto + mediano * mediano  == largo * largo)
    {
        cout << "Las medidas ingresadas pueden formar un tríangulo recto" << endl;
    }
    else
    {
        cout << "Las medidas ingresadas no pueden formar un tríangulo recto" << endl;
    }

    return 0;
}
