// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 1
// Problema planteado: Área de un triángulo
#include <iostream>

using namespace std;

int main()
{
    float altura=0;
    float base=0;
    float area=0;
    
    
    cout<<"Ingrese altura"<<endl;
    cin>>altura;
    cout<<"Ingrese base"<<endl;
    cin>>base;
    area=(base*altura)/2;
    cout<<"El area del triangulo es: "<<area<<endl;

    return 0;
}
