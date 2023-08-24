// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 4
// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin 
#include <iostream>

using namespace std;

int main()
{
    float celsius=0;
    //Operacion oara pedir dato, convertirlo y mostrarlo
    cout<<"Ingrese grados Celsius para cambiar a grados Kelvin"<<endl;
    cin>>celsius;
    cout<<celsius<<" grados Celsius son "<<celsius+273.15<<" grados Kelvin"<<endl;
    return 0;
}
