#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones {
public:
	explicit LibroCalificaciones(string nombreCurso, string nombreCatedratico);
	void establecerNombreCurso(string nombre);
	string obtenerNombreCurso() const;
	void establecerNombreCatedratico(string nombre);
	string obtenerNombreCatedratico() const;
	void mostrarMensaje() const;
private:
	string nombreCurso;
	string nombreCatedratico;
};

LibroCalificaciones::LibroCalificaciones(string nombreCurso, string nombreCatedratico)
: nombreCurso(nombreCurso), nombreCatedratico(nombreCatedratico)
{
}
void LibroCalificaciones::establecerNombreCurso(string nombre)
{
	nombreCurso = nombre;
}
string LibroCalificaciones::obtenerNombreCurso()const
{
	return nombreCurso;
}
void LibroCalificaciones::establecerNombreCatedratico(string nombre)
{
	nombreCatedratico = nombre;
}
string LibroCalificaciones::obtenerNombreCatedratico() const
{
	return nombreCatedratico;
}
void LibroCalificaciones::mostrarMensaje() const
{
	cout << "Bienvenido al libro de calificaciones para: " << obtenerNombreCurso()<< endl;
	cout << "Este curso es presentado por: " << obtenerNombreCatedratico() << endl;
}

int main()
{
	LibroCalificaciones libroCalificaciones("Programacion I", "El ingeniero Esduardo del Aguila");

	libroCalificaciones.mostrarMensaje();

	return 0;
}
