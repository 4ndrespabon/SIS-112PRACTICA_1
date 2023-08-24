// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 17
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas
#include <iostream>

using namespace std;

int main()
{
    int bs;
    cout<<"Ingrese el valor en bolivianos: ",cin>>bs;
    //Conversiones y Salida
    cout<<bs<<" bolivianos son: "<<endl;
    cout<<bs/7.46<<" Euros"<<endl;
    cout<<bs/6.87<<" Dolares"<<endl;
    cout<<bs/8.74<<" Libras Esterlinas"<<endl;
    return 0;
}
