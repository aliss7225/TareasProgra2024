#include <iostream>

using namespace std;

class Fecha {
public:
    Fecha(int dia, int mes, int anio);
    void establecerMes(int mMes);
    int obtenerMes() const;
    void establecerDia(int mDia);
    int obtenerDia() const;
    void establecerAnio(int mAnio);
    int obtenerAnio() const;
    void mostrarFecha() const;

private:
    int mes;
    int dia;
    int anio;
};
Fecha::Fecha(int dia, int mes, int anio)
: dia(dia), mes(mes), anio(anio)
{
    if (mes < 1 || mes > 12) {
        this->mes = 1;
    }
}
void Fecha::establecerMes(int mMes)
{
    if (mMes < 1 || mMes > 12) {
        mes = 1;
    } else {
        mes = mMes;
    }
}
int Fecha::obtenerMes() const
{
    return mes;
}
void Fecha::establecerDia(int mDia)
{
    dia = mDia;
}
int Fecha::obtenerDia() const
{
    return dia;
}
void Fecha::establecerAnio(int mAnio)
{
    anio = mAnio;
}

int Fecha::obtenerAnio() const
{
    return anio;
}
void Fecha::mostrarFecha() const
{
    cout << dia << "/" << mes << "/" << anio << endl;
}
int main()
{
    Fecha fecha(30, 15, 2006); //Al establecer un mes fuera del ranto este se cambiara automáticamente al correr el programa

    fecha.mostrarFecha();

    return 0;
}
