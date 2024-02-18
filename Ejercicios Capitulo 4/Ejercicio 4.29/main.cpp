#include <iostream>

    using namespace std;

int main()
 {
    int potencia = 1;
    while (true) {
        cout << "La potencia de dos elevado a  " << potencia << " es: " << (1 << potencia) << endl;
        potencia++;
    }

    return 0;
}
