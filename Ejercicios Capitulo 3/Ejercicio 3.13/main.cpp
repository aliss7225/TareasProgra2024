#include <iostream>
#include <string>
using namespace std;

class Factura {
public:
	Factura(string codigoPieza, string descripcion, int cantidad, int precio);
	void mostrarFactura() const;
private:
	string codigoPieza;
	string descripcion;
	int cantidad;
	int precio;
};
Factura::Factura(string codigoPieza, string descripcion, int cantidad, int precio)
: codigoPieza(codigoPieza), descripcion(descripcion), cantidad(cantidad), precio(precio)
{
}
void Factura::mostrarFactura() const
{
	cout << "Codigo de pieza: " << codigoPieza << endl;
	cout << "Descripcion: " << descripcion << endl;
	cout << "Cantidad: " << cantidad << endl;
	cout << "Precio unitario: " << precio << endl;
	cout << "Total: " << precio * cantidad << endl;
}
int main()
{
	Factura factura("1", "martillo", 2, 50);
	factura.mostrarFactura();
	return 0;
}
