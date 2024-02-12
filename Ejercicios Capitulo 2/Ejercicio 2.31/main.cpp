#include <iostream>

using namespace std;

int main()
{
    float kilometros_dia,precio_gasolina,litro_gasolina,parqueo,peaje=0;

    float Costo_gasolina,Costo_total_gasolina,Total;


    cout<<"Ingrese la cantidad de kilometros que recorrio durante el día"<<endl;
    cin>>kilometros_dia;

    cout<<"Ingrese el precio pagado por el litro de gasolina"<<endl;
    cin>>precio_gasolina;

    cout<<"Segun su vehiculo ingrese cual es el promedio de gasolina que gasta por kilometro"<<endl;
    cin>>litro_gasolina;

    cout<<"Ingrese cuanto pago por el estacionamiento" << endl;
    cin >> parqueo;

    cout<<"ingrese cuanto pago por el peaje del día de hoy" << endl;
    cin>>peaje;


    Costo_gasolina   =(precio_gasolina)/(kilometros_dia);
    Costo_total_gasolina       =(Costo_gasolina)*(kilometros_dia);
    Total                      =(Costo_total_gasolina)+(parqueo)+(peaje);
    cout<<"el costo diario por conduicr "<<kilometros_dia<<" KM es "<<Total<< " Quetzales al dia"<<endl;

    return 0;
}
