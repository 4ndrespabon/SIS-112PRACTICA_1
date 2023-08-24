// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 48
// Problema planteado: Dado un rango (A y B) de números enteros, obtener la cantidad de números pares que contiene dicho rango.

#include <iostream>

using namespace std;

int main()
{
    int a,b,pares;
    cout<<"Ingrese A: "<<endl,cin>>a;
    cout<<"Ingrese B: "<<endl,cin>>b;
    for (a;a<=b;a=a+1){
        if (a%2==0){
            pares=pares+1;
        }
    }
    cout<<"Pares: "<<pares<<endl;
    return 0;
}
