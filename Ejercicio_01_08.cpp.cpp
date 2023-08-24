// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 8
// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una hora se cobra 5 Bs adicional por hora.
//Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar.
#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int pago=7;
    int hora;
    cout<<"Ingrese la cantidad de horas que estuvo"<<endl;
    cin>>hora;
    //Proceso y Salida
    cout<<"Debe pagar: "<<pago+(hora-1)*5<<endl;
    return 0;
}
