// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 39
// Problema planteado: Escriba un programa para leer dos valores enteros distintos entre si,
// de tal forma que si el primer número es mayor al segundo, genere una serie descendente,
// caso contrario muestre una serie ascendente, el factor de incremento o decremento es la unidad.
#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int a,b,i,j;
    cout<<"Ingrese los dos numeros"<<endl,cin>>a,cin>>b;
    //Proceso-Salidas
    if(a>b){
        for (i=a;i>=b;i--){
            cout<<i<<" ";
        }
    } else if (a<b){
        for (i=a;i<=b;i++){
            cout<<i<<" ";
        }
    }
    return 0;
}
