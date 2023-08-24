// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 67
// Problema planteado: Leer un número entero y determinar si la suma de sus dígitos distintos de cero forman
// un número primo, de ser así imprima el mensaje respectivo.

#include <iostream>

using namespace std;

int main()
{
    int n,suma,primo;
    cout<<"Ingrese numero: "<<endl,cin>>n;
    while (n>=9){
        suma=suma+(n%10);
        n=n/10;
    } if (n<=9){
        suma=suma+n;
    }
    cout<<suma<<endl;
    for (int i=1;i<=suma;i++){
        if (n%i==0){
            primo=primo+1;
        }
    }
    if (primo==2){
        cout<<"La suma de los digitos es numero primo"<<endl;
    } else {
        cout<<"La suma de los digitos no es numero primo"<<endl;
    }
    return 0;
}
