// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 56
// Problema planteado: Generar (para un orden n):
/*Sea n=5:
 1 0 1 0 1
 0 1 0 1 0
 1 0 1 0 1
 0 1 0 1 0
 1 0 1 0 1*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Ingrese n: "<<endl,cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if ((i+j)%2==0){
                cout<<"1 ";
            } else {
                cout<<"0 ";
            }
        }
    cout<<endl;
    }
    return 0;
}