// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 18
// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Entrada
    int l,h;
    cout<<"Ingrese lado"<<endl,cin>>l;
    cout<<"Ingrese altura"<<endl,cin>>h;
    //Proceso-Salida
    cout<<"El volumen de la piramide es: "<<(1.0/3.0)*pow(l,2)*h;
    return 0;
}
