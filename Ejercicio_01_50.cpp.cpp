// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 50
// Problema planteado: Escribe una función que tome 3 parámetros:
// dos de tipo enteros y uno de tipo carácter. 
// La función deberá sumar, restar, multiplicar o dividir los valores de los dos primeros 
// parámetros dependiendo del código indicado en el tercer parámetro, y devolver el resultado.

#include <iostream>

using namespace std;

int main()
{
    double a,b;
    char op;
    cout<<"Ingrese num1: "<<endl,cin>>a;
    cout<<"Ingrese num2: "<<endl,cin>>b;
    cout<<"Ingrese \nS=Suma\nR=Resta\nM=Multiplicacion\nD=Division\n",cin>>op;
    if (op=='S'){
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
    } else if (op=='R'){
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
    } else if (op=='M'){
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    } else if (op=='D'){
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
    }
    return 0;
}
