// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 55
// Problema planteado: Generar las secuencias:
// 1 2 3 4 …………..n
// 1 2 3 4….. n-1
// 1 2 3 …...n-2
// ……..
// 1

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Ingrese n: "<<endl,cin>>n;
    for (int i=n;i>=1;i--){
        for (int j=i ; j>=1 ; j--){
            cout<<j<<" ";
        }
    cout<<endl;
    }

    return 0;
}