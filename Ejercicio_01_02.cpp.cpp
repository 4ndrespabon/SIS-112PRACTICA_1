// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 2
// Problema planteado: Volumen de una esfera
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radio=0;
    
    cout<<"Ingrese el radio"<<endl;
    cin>>radio;
    
    cout<<"El volumen de la esfera es: "<< (4.0/3.0)*3.1416*pow(radio,3)<<endl;
    
    return 0;
}
