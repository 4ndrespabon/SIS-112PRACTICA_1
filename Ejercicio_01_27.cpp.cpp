// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 27
// Problema planteado: Crear un programa que indique si un número es perfecto o no,
// se dice que un número es perfecto si la suma de sus divisores es igual al número.
// Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el número 6 es perfecto, si el número es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto.

#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int num1,suma1;
    cout<<"Ingrese numero"<<endl;
    cin>>num1;
    //Proceso
    for (int i=1;i<num1;i++){
        if (num1%i==0){
            suma1=suma1+i;
        }
    }
    //verificacion y salida
    if (suma1==num1){
        cout<<"Es numero perfecto";
    } else {
        cout<<"No es numero perfecto";
    }
    return 0;
}
