#include <iostream>
#include <string>

using namespace std;

class Cuenta {
public:
    unsigned int numeroCuenta;
    string primerNombre;
    string apellido;
    double saldo;

    Cuenta(unsigned int numCuenta, string nombre, string apellido, double saldoInicial)
        : numeroCuenta(numCuenta), primerNombre(nombre), apellido(apellido), saldo(saldoInicial) {}
};

int main() {

    unsigned int contadorEstudiantes = 0;

    double saldoInicial = 1000.0;

    Cuenta cuenta1 {32645236, "Alisson", "Lopez", 2400.0};

    cout << "Contador de estudiantes: " << contadorEstudiantes << endl;
    cout << "Saldo inicial: " << saldoInicial << endl;
    cout << "Numero de cuenta: " << cuenta1.numeroCuenta << endl;
    cout << "Nombre del propietario de la cuenta: " << cuenta1.primerNombre << " " << cuenta1.apellido << endl;
    cout << "Saldo: " << cuenta1.saldo << endl;

    return 0;
}
