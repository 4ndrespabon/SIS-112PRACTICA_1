// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 32
// Problema planteado: Leer un número entero y mostrarlo con las cifras al revés.

#include <iostream>

using namespace std;

int main()
{
    int num,digito;
    cout<<"Ingresar numero"<<endl,cin>>num;
    while (num!=0){
        digito=num%10;  
        cout<<digito;        
        num=num/10;
    }
    return 0;
}
