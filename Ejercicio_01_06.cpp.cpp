// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 20/08/2023
// Fecha modificación: 20/08/2023
// Número de ejericio: 6
// Problema planteado: Número primo
#include <iostream>

using namespace std;

int main()
{
    int num=0;
    int primo=0;
    cout<<"Ingrese el numero a determinar si es primo"<<endl;
    cin>>num;
    for (int i=1;i<=num;i++){
        if (num%i==0){
            primo=primo+1;
        }
    }
    if (primo==2){
        cout<<num<<" es numero primo"<<endl;
    }
    else
    {
        cout<<num<<" no es numero primo"<<endl;
    }
    return 0;
}

