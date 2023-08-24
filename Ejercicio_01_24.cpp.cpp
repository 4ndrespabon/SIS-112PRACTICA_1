// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 24
// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos.

#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int n,pd,sd;
    cout << "Ingrese un número: ",cin>>n;
    //Proceso
    while (n>100){
        n=n/10;
    }
    pd=n/10;
    sd=n%10;
    cout<<"Primer digito es: "<<pd<<endl;
    cout<<"Segundo digito es: "<<sd<<endl;
    cout<<"La suma de estos es: "<<pd+sd;
    return 0;
}
