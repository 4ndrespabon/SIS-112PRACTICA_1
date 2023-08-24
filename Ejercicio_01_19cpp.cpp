// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 19
// Problema planteado: Convertir coordenadas polares en rectangulares.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //entrada
    double r,O;
    cout<<"Ingrese r:"<<endl,cin>>r;
    cout<<"Ingrese el angulo:"<<endl,cin>>O;
    //Proceso-Salida
    cout<<"x = "<<r*cos(O)<<" , y = "<<r*sin(O)<<endl;
    return 0;
}
