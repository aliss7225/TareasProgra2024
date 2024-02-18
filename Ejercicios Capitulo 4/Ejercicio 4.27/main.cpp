#include <iostream>

using namespace std;

int binarioADecimal(int numeroBinario) {
    int decimal = 0;
    int potencia = 1;

    while (numeroBinario != 0) {
        int digito = numeroBinario % 10;
        decimal += digito * potencia;
        potencia *= 2;
        numeroBinario /= 10;
    }

    return decimal;
}

int main() {
    int numeroBinario;

    cout << "Ingrese un numero binario (que solo contenga 0 y 1): " << endl ;
    cin >> numeroBinario;


    int decimal = binarioADecimal(numeroBinario);
    cout << "El numero en decimales es: " << decimal << endl;

    return 0;
}
