// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 31
// Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es

#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int num1,num2;
    cout<<"Ingrese el primer num: "<<endl,cin>>num1;
    cout<<"Ingrese el segundo num: "<<endl,cin>>num2;
    //VErificacion si son mulriplos y salida
    if (num1%num2==0){
        cout<<num2<<" si es multiplo de "<<num1;
    } else if (num2%num1==0){
        cout<<num1<<" si es multiplo de "<<num2;
    } else{
        cout<<"No son multiplos";
    }
    return 0;
}
