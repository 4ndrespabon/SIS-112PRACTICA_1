// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 15
// Problema planteado: Escriba la sucesión de Fibonacci.
#include <iostream>

using namespace std;

int main()
{
    int a=1,b,c=1,n,contador;
    cout<<"Hasta que numero de la serie de Fibonacci quiere llegar? "<<endl;
    cin>>n;
    //Serie de Fibonacci y Salida
    while (contador!=n){
        cout<<c<<",";
        c=a+b;
        b=a;
        a=c;
        contador++;
    }
    return 0;
}
